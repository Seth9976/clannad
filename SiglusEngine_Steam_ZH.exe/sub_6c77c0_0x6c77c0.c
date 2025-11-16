// 函数: sub_6c77c0
// 地址: 0x6c77c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* i = *arg1

if (i == arg1[1])
    arg1[3] = 0
    return i

do
    char* edx_1 = *i
    bool cond:0_1 = *(edx_1 + 0x34) u< 8
    void** ecx = &edx_1[0x20]
    ecx[4] = 0
    
    if (not(cond:0_1))
        ecx = *ecx
    
    *ecx = nullptr
    void** ecx_1 = &edx_1[0x38]
    bool cond:1_1 = ecx_1[5] u< 8
    ecx_1[4] = 0
    
    if (not(cond:1_1))
        ecx_1 = *ecx_1
    
    i = &i[1]
    *ecx_1 = nullptr
    *(edx_1 + 0x58) = *(edx_1 + 0x54)
    *(edx_1 + 0x64) = *(edx_1 + 0x60)
    *edx_1 = 0
    *(edx_1 + 0x1c) = 0xffffffff
    edx_1[0x50] = 0
while (i != arg1[1])

int32_t eax = *arg1
arg1[1] = eax
arg1[3] = 0
return eax
