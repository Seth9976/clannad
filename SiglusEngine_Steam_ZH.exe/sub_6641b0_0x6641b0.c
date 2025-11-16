// 函数: sub_6641b0
// 地址: 0x6641b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* eax = sub_664120(arg1)
void* dwBytes_1 = eax - arg1
void* var_10 = eax
void* dwBytes = dwBytes_1
int16_t eax_1 = *(arg1 + 2)
int32_t ecx
ecx.b = eax_1 == 0xffff
int32_t var_8 = ecx
void* eax_2 = &arg1[4]

if (eax_1 != 0xffff)
    eax_2 = &arg1[2]

uint32_t uFlags_1 = zx.d(*eax_2)
void* edx = eax
uint32_t uFlags_3 = uFlags_1
uint32_t uFlags_4 = 0

if (uFlags_1 s<= 0)
    return arg1

uint32_t uFlags = uFlags_1

while (true)
    int16_t* ecx_1 = edx + 0x18
    
    if (ecx == 0)
        ecx_1 = edx + 0x12
    
    if (*ecx_1 != 0xffff)
        do
            uFlags_1.w = *ecx_1
            ecx_1 = &ecx_1[1]
        while (uFlags_1.w != 0)
    else
        ecx_1 = &ecx_1[2]
    
    if (*ecx_1 != 0xffff)
        do
            uFlags_1.w = *ecx_1
            ecx_1 = &ecx_1[1]
        while (uFlags_1.w != 0)
    else
        ecx_1 = &ecx_1[2]
    
    uint32_t eax_3 = zx.d(*ecx_1)
    
    if (eax_3.w != 0 && var_8 == 0)
        eax_3 += 0xfffe
    
    void* eax_5 = edx + 0x18
    void* ecx_4 = (ecx_1 + 5 + zx.d(eax_3.w)) & 0xfffffffc
    
    if (var_8 == 0)
        eax_5 = edx + 0x12
    
    if (*eax_5 != 0x7b)
        dwBytes += ecx_4 - edx
        uFlags_1 = uFlags_4
    else
        uFlags_1 = 1
        uFlags_4 = 1
    
    edx = ecx_4
    uint32_t uFlags_2 = uFlags
    uFlags -= 1
    
    if (uFlags_2 == 1)
        break
    
    ecx = var_8

void* edi_1 = var_10

if (uFlags_1 == 0)
    return arg1

HGLOBAL eax_8 = GlobalAlloc(uFlags, dwBytes)
HGLOBAL esi_1 = eax_8
HGLOBAL var_c = eax_8
HGLOBAL var_20 = esi_1
sub_5c49b0(_memcpy_s(eax_8, dwBytes, arg1, dwBytes_1))
void* ebx = dwBytes - dwBytes_1
void* edx_2 = esi_1 + dwBytes_1
void* var_c_1 = edx_2
void* var_14 = ebx

if (ebx u<= dwBytes)
    void* eax_11 = esi_1 + 0x10
    
    if (*(esi_1 + 2) != 0xffff)
        eax_11 = esi_1 + 8
    
    int32_t ebx_1 = 0
    *eax_11 = 0
    
    while (true)
        void* eax_12 = edi_1 + 0x18
        
        if (var_8 == 0)
            eax_12 = edi_1 + 0x12
        
        void* ecx_5
        
        if (*eax_12 != 0xffff)
            do
                ecx_5.w = *eax_12
                eax_12 += 2
            while (ecx_5.w != 0)
        else
            eax_12 += 4
        
        if (*eax_12 != 0xffff)
            do
                ecx_5.w = *eax_12
                eax_12 += 2
            while (ecx_5.w != 0)
        else
            eax_12 += 4
        
        uint32_t ecx_6 = zx.d(*eax_12)
        
        if (ecx_6.w != 0 && var_8 == 0)
            ecx_6 += 0xfffe
        
        edi_1 = (eax_12 + 5 + zx.d(ecx_6.w)) & 0xfffffffc
        void* eax_13 = var_10 + 0x18
        
        if (var_8 == 0)
            eax_13 = var_10 + 0x12
        
        if (*eax_13 != 0x7b)
            void* esi_3 = edi_1 - var_10
            sub_5c49b0(_memcpy_s(edx_2, var_14, var_10, esi_3))
            var_c_1 += esi_3
            void* eax_15 = var_14
            void* ecx_9 = var_14 - esi_3
            var_14 = ecx_9
            
            if (ecx_9 u> eax_15)
                break
            
            esi_1 = var_20
            int16_t* eax_16 = sub_664100(esi_1)
            edx_2 = var_c_1
            *eax_16 += 1
        
        ebx_1 += 1
        var_10 = edi_1
        
        if (ebx_1 s>= uFlags_3)
            return esi_1

sub_5c4990(0x80004005)
noreturn
