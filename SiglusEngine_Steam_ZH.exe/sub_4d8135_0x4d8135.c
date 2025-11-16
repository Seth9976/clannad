// 函数: sub_4d8135
// 地址: 0x4d8135
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0
void* eax = arg1[0x40]
int32_t* i = nullptr
int32_t ebx = arg1[4]
int32_t edi
int32_t var_20 = edi
int32_t var_14[0x2]

do
    int32_t esi_2 = *(i + *(eax + 0x10))
    void* edx_3 = *(arg1[5] + (esi_2 << 2))
    
    if ((*(*(ebx + (*(edx_3 + 4) << 2)) + 4) & 1) == 0 || *(edx_3 + 0x5c) != 0)
        int32_t edx_4 = var_8
        var_8 += 1
        var_14[edx_4] = esi_2
    
    i = &i[1]
while (i u< 8)

if (var_8 == 0)
    return 0

int32_t eax_2 = arg1[0x63]
int32_t edx_6 = neg.d(eax_2)
int32_t eax_3 = neg.d(eax_2)
return sub_4d75f7(arg1, 0x25, &var_14, var_8, *(eax + 8), 
    sbb.d(edx_6, edx_6, eax_2 != 0) & &arg1[0x64], sbb.d(eax_3, eax_3, eax_2 != 0) & &arg1[0x68], 
    4, 0, 0, 0, 0)
