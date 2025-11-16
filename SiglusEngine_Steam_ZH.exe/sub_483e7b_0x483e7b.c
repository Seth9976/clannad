// 函数: sub_483e7b
// 地址: 0x483e7b
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
void* var_c = arg1
void* eax = *(arg1 + 8)
void* edx = *(eax + 0x34)
int32_t esi = *(eax + 0x30)
var_8 = edx

if (esi == 0 && edx == 0)
    return 0

void* edx_1 = *(arg1 + 4)
void* temp1_1 = var_8
int32_t edi
int32_t var_18_1 = edi
int32_t result

if (temp1_1 u< 0 || (temp1_1 u<= 0 && esi u<= *(edx_1 + 0x28)))
    var_8 = eax + esi
    result = sub_46296b(edx_1, &var_8, arg2, arg1 + 0x14)
else
    result = 0x8876038f

return result
