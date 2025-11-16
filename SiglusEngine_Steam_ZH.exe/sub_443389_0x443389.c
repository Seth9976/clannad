// 函数: sub_443389
// 地址: 0x443389
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* eax = arg1[1]
int32_t edi
int32_t var_8 = edi

if (eax != 0)
    int32_t ecx = *arg1
    
    if (ecx == 4)
        (*(*eax + 8))(eax)
        arg1[1] = 0
    else if (ecx s> 4 && (ecx s<= 9 || ecx == 0xf || ecx == 0x10))
        (*(*eax + 8))(eax)
        arg1[1] = 0

int32_t* result = arg1[2]

if (result != 0)
    result = (*(*result + 8))(result)
    arg1[2] = 0

return result
