// 函数: sub_4636e2
// 地址: 0x4636e2
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
int32_t edi
int32_t var_10 = edi
void* eax = arg1[6]
void* esi_1 = *(eax + 0x10) + eax
var_8 = eax + 0x20

if (eax + 0x20 u< esi_1)
    do
        int32_t result = sub_46345d(arg1, &var_8, esi_1)
        
        if (result s< 0)
            return result
    while (var_8 u< esi_1)

return 0
