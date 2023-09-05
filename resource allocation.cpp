#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

class VirtualMachine {
public:
    VirtualMachine(const std::string& name, int cpu, int memory)
        : name(name), cpu(cpu), memory(memory) {}

    std::string name;
    int cpu;
    int memory;
};

class PhysicalHost {
public:
    PhysicalHost(const std::string& name, int cpu_capacity, int memory_capacity)
        : name(name), cpu_capacity(cpu_capacity), memory_capacity(memory_capacity) {}

    std::string name;
    int cpu_capacity;
    int memory_capacity;
    std::vector<VirtualMachine> vms;
};

void addHost(std::vector<PhysicalHost>& hosts, const std::string& name, int cpu_capacity, int memory_capacity) {
    PhysicalHost host(name, cpu_capacity, memory_capacity);
    hosts.push_back(host);
}

VirtualMachine addVM(std::vector<VirtualMachine>& vms, const std::string& name, int cpu, int memory) {
    VirtualMachine vm(name, cpu, memory);
    vms.push_back(vm);
    return vm;
}

void viewVMs(const std::vector<VirtualMachine>& vms) {
    for (const VirtualMachine& vm : vms) {
        std::cout << "VM Name: " << vm.name << ", CPU: " << vm.cpu << ", Memory: " << vm.memory << std::endl;
    }
}

void viewHosts(const std::vector<PhysicalHost>& hosts) {
    for (const PhysicalHost& host : hosts) {
        int usedCpu = 0;
        int usedMemory = 0;
        for (const VirtualMachine& vm : host.vms) {
            usedCpu += vm.cpu;
            usedMemory += vm.memory;
        }
        std::cout << "Host Name: " << host.name << std::endl;
        std::cout << "  CPU Used: " << usedCpu << "/" << host.cpu_capacity << std::endl;
        std::cout << "  Memory Used: " << usedMemory << "/" << host.memory_capacity << std::endl;
    }
}

void deleteVM(std::vector<VirtualMachine>& vms, const std::string& name) {
    auto it = std::remove_if(vms.begin(), vms.end(), [&](const VirtualMachine& vm) {
        return vm.name == name;
    });

    if (it != vms.end()) {
        vms.erase(it, vms.end());
    } else {
        std::cout << "VM '" << name << "' not found." << std::endl;
    }
}

void deleteHost(std::vector<PhysicalHost>& hosts, const std::string& name) {
    auto it = std::remove_if(hosts.begin(), hosts.end(), [&](const PhysicalHost& host) {
        return host.name == name;
    });

    if (it != hosts.end()) {
        hosts.erase(it, hosts.end());
    } else {
        std::cout << "Host '" << name << "' not found." << std::endl;
    }
}

int main() {
    std::vector<PhysicalHost> hosts;
    std::vector<VirtualMachine> vms;

    while (true) {
        std::cout << "\nChoose an option:" << std::endl;
        std::cout << "1. Add a host" << std::endl;
        std::cout << "2. Add a VM" << std::endl;
        std::cout << "3. View VMs" << std::endl;
        std::cout << "4. View hosts with resource utilization" << std::endl;
        std::cout << "5. Delete a VM" << std::endl;
        std::cout << "6. Delete a host" << std::endl;
        std::cout << "7. Exit" << std::endl;

        int option;
        std::cin >> option;

        switch (option) {
            case 1:
                std::string hostName;
                int cpuCapacity, memoryCapacity;
                std::cout << "Enter host name: ";
                std::cin >> hostName;
                std::cout << "Enter CPU capacity: ";
                std::cin >> cpuCapacity;
                std::cout << "Enter memory capacity: ";
                std::cin >> memoryCapacity;
                addHost(hosts, hostName, cpuCapacity, memoryCapacity);
                break;

            case 2:
                std::string vmName;
                int vmCpu, vmMemory;
                std::cout << "Enter VM name: ";
                std::cin >> vmName;
                std::cout << "Enter required CPU: ";
                std::cin >> vmCpu;
                std::cout << "Enter required memory: ";
                std::cin >> vmMemory;
                addVM(vms, vmName, vmCpu, vmMemory);
                break;

            case 3:
                viewVMs(vms);
                break;

            case 4:
                viewHosts(hosts);
                break;

            case 5:
                std::cout << "Enter VM name to delete: ";
                std::cin >> vmName;
                deleteVM(vms, vmName);
                break;

            case 6:
                std::cout << "Enter host name to delete: ";
                std::cin >> hostName;
                deleteHost(hosts, hostName);
                break;

            case 7:
                return 0;

            default:
                std::cout << "Invalid option. Please try again." << std::endl;
                break;
        }
    }

    return 0;
}
