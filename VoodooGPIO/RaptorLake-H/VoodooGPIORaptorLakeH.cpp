//
//  VoodooGPIORaptorLakeH.cpp
//  VoodooGPIO
//

#include "VoodooGPIORaptorLakeH.hpp"

OSDefineMetaClassAndStructors(VoodooGPIORaptorLakeS, VoodooGPIOIntel);

bool VoodooGPIORaptorLakeS::start(IOService *provider) {
    this->pins = rpls_pins;
    this->npins = ARRAY_SIZE(rpls_pins);
    this->groups = rpls_groups;
    this->ngroups = ARRAY_SIZE(rpls_groups);
    this->functions = rpls_functions;
    this->nfunctions = ARRAY_SIZE(rpls_functions);
    this->communities = rpls_communities;
    this->ncommunities = ARRAY_SIZE(rpls_communities);

    IOLog("%s::Loading GPIO Data for Raptor Lake-S/HX (INTC1085)\n", getName());

    return VoodooGPIOIntel::start(provider);
}
