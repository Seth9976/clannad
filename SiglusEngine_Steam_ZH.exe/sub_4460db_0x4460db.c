// 函数: sub_4460db
// 地址: 0x4460db
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* eax = arg1[3]
*arg1 = &data_ac3188

if (eax != 0)
    (*(*eax + 8))(eax)
    arg1[3] = 0

int32_t* result = arg1[2]

if (result != 0)
    result = (*(*result + 8))(result)
    arg1[2] = 0

return result
