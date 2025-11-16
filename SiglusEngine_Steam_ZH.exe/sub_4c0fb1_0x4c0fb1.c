// 函数: sub_4c0fb1
// 地址: 0x4c0fb1
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* eax = arg1[0x40]
int32_t ecx = eax[3]
int32_t edi
int32_t var_60 = edi
int32_t* ecx_1 = eax[4]
int32_t* eax_1 = eax[2]
int32_t edi_2 = *eax & 0xfffff
int32_t var_34[0x4]
int32_t result = (*(*arg1 + 0x80))(arg1[0x3f], &var_34, 4, 0, 0)

if (result s< 0)
    return result

int32_t var_54[0x4]
int32_t var_44[0x4]
int32_t var_24[0x4]

for (int32_t i = 0; i u< 4; i += 1)
    var_54[i] = arg1[0x88]
    var_44[i] = arg1[0x89]
    
    if (i u< ecx)
        var_24[i] = var_34[*(*(arg1[5] + (ecx_1[i] << 2)) + 0x10)]

sub_4d75f7(arg1, 2, &var_24, ecx, eax_1, &eax_1[edi_2], nullptr, edi_2, 0, &data_1000000, 0, 0)
return sub_4d75f7(arg1, 0x58, ecx_1, ecx, &var_24, &var_54, &var_44, edi_2, 0, 0, 0, 0)
