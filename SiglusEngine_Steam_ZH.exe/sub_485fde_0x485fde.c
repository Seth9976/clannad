// 函数: sub_485fde
// 地址: 0x485fde
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = arg1[0xd]
*arg1 = &data_ac7c28
arg1[1] = &data_ac7c14

if (eax != 0)
    _free(eax)

int32_t result = sub_46176f(&arg1[0xe])
arg1[1] = &data_ac7bec
return result
