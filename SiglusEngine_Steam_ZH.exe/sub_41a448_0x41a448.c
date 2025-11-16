// 函数: sub_41a448
// 地址: 0x41a448
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint8_t* ebx = *(arg1[1] + 0x20)
void* eax_1 = *arg1
char* i = *(eax_1 + 0x20)
int32_t edi
int32_t var_20 = edi
int32_t* var_14 = arg1

for (void* edi_3 = *(eax_1 + 0x6c) * *(eax_1 + 0x60) + i; i u< edi_3; i = &i[*(eax_1 + 0x60) << 1])
    void* eax_3 = *(eax_1 + 0x68) + i
    void* edx_2 = *(eax_1 + 0x60) + i
    uint8_t* var_c_1 = ebx
    char* i_1 = i
    
    if (i u< eax_3)
        do
            uint32_t ecx_2 = zx.d(*(edx_2 + 1)) + zx.d(i_1[1]) + zx.d(*edx_2)
            uint32_t ebx_5 = zx.d(*i_1)
            i_1 = &i_1[2]
            uint8_t* ebx_6 = var_c_1
            var_c_1 = &var_c_1[1]
            edx_2 += 2
            *ebx_6 = ((ecx_2 + ebx_5 + 2) u>> 2).b
        while (i_1 u< eax_3)
        
        arg1 = var_14
    
    ebx = &ebx[*(arg1[1] + 0x60)]
    eax_1 = *arg1

return 0
