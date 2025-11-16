// 函数: sub_468b80
// 地址: 0x468b80
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
char* esi = arg1
int32_t edi
int32_t var_14 = edi
uint32_t edi_1 = zx.d(esi[0x116])
char* eax

if ((*(esi + 0x60) & 0x602000) != 0)
    sub_468879(esi)
    
    if (edi_1 == 3)
        uint32_t i_2 = zx.d(*(esi + 0x108))
        
        if (i_2 s> 0)
            eax = &(*(esi + 0x104))[2]
            uint32_t i
            
            do
                uint32_t edx_1
                edx_1.b = *(zx.d(eax[0xfffffffe]) + *(esi + 0x138))
                eax[0xfffffffe] = edx_1.b
                uint32_t edx_2
                edx_2.b = *(zx.d(eax[0xffffffff]) + *(esi + 0x138))
                eax[0xffffffff] = edx_2.b
                uint32_t edx_3
                edx_3.b = *(zx.d(*eax) + *(esi + 0x138))
                *eax = edx_3.b
                eax = &eax[3]
                i = i_2
                i_2 -= 1
            while (i != 1)

if ((esi[0x60] & 8) == 0 || edi_1 != 3)
    return 

int32_t ebx_4 = 8 - zx.d(esi[0x150])
eax = 8 - zx.d(esi[0x151])
int32_t ecx_2 = 8 - zx.d(esi[0x152])
arg1 = eax
char var_8_1 = ecx_2.b

if (ebx_4 s< 0 || ebx_4 s> 8)
    ebx_4 = 0

if (eax s< 0 || eax s> 8)
    arg1 = nullptr

if (ecx_2 s< 0 || ecx_2 s> 8)
    var_8_1 = 0

ecx_2.w = *(esi + 0x108)

if (ecx_2.w u<= 0)
    return 

eax = nullptr
uint32_t i_3 = zx.d(ecx_2.w)
uint32_t i_1

do
    void* edx_4 = &eax[*(esi + 0x104)]
    int32_t ecx_3
    ecx_3.b = ebx_4.b
    *edx_4 u>>= ecx_3.b
    void* edx_5 = &eax[*(esi + 0x104) + 1]
    int32_t ecx_4
    ecx_4.b = arg1.b
    *edx_5 u>>= ecx_4.b
    void* edx_6 = &eax[*(esi + 0x104) + 2]
    int32_t ecx_5
    ecx_5.b = var_8_1
    *edx_6 u>>= ecx_5.b
    eax = &eax[3]
    i_1 = i_3
    i_3 -= 1
while (i_1 != 1)
