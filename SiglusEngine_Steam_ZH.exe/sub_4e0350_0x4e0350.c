// 函数: sub_4e0350
// 地址: 0x4e0350
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* ecx = *(arg1 + 0x13c)
int32_t edi
int32_t var_14 = edi
int32_t* edi_1 = *arg3

if (ecx s<= 0)
    return 

int32_t i_2 = *(arg2 + 0x28) - 2
void* eax_2 = arg4 - edi_1
int32_t* var_8_1 = edi_1
void* var_c_1 = eax_2
arg4 = ecx

while (true)
    char* ecx_1 = *(eax_2 + edi_1)
    uint32_t edx = zx.d(*ecx_1)
    uint32_t esi_1 = zx.d(ecx_1[1])
    char* eax_3 = *edi_1
    void* ecx_2 = &ecx_1[1]
    *eax_3 = edx.b
    eax_3[1] = ((edx * 3 + esi_1 + 2) s>> 2).b
    int32_t i_1 = i_2
    void* eax_5 = &eax_3[2]
    
    if (i_1 u> 0)
        int32_t i
        
        do
            ecx_2 += 1
            uint32_t edi_2 = esi_1 * 3
            esi_1 = zx.d(*ecx_2)
            *eax_5 = ((zx.d(*(ecx_2 - 2)) + edi_2 + 1) s>> 2).b
            *(eax_5 + 1) = ((esi_1 + edi_2 + 2) s>> 2).b
            eax_5 += 2
            i = i_1
            i_1 -= 1
        while (i != 1)
        edi_1 = var_8_1
    
    uint32_t edx_3 = zx.d(*ecx_2)
    *eax_5 = ((zx.d(*(ecx_2 - 1)) + edx_3 * 3 + 1) s>> 2).b
    *(eax_5 + 1) = edx_3.b
    edi_1 = &edi_1[1]
    bool cond:1_1 = arg4 != 1
    var_8_1 = edi_1
    arg4 -= 1
    
    if (not(cond:1_1))
        break
    
    eax_2 = var_c_1
