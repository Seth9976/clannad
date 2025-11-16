// 函数: sub_42f4f9
// 地址: 0x42f4f9
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
var_8 = nullptr
int32_t edi
int32_t var_10 = edi
void* edi_1 = arg1

if (arg2 != 0)
    char* eax_1 = arg2
    
    do
        arg1.b = *eax_1
        eax_1 = &eax_1[1]
    while (arg1.b != 0)
    
    var_8 = eax_1 - &eax_1[1] + 1

int32_t result = sub_42f442(edi_1, &var_8, 4, arg3)

if (result s>= 0 && arg2 != 0)
    return sub_42f442(edi_1, arg2, var_8, nullptr)

return result
