// 函数: sub_611b30
// 地址: 0x611b30
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* edi = *arg2

if (edi != 0)
    (*(*edi + 4))(edi)

int32_t* eax_2 = *arg1
*arg1 = edi

if (eax_2 != 0)
    (*(*eax_2 + 8))(eax_2)

arg1[1] = arg2[1]
arg1[2] = arg2[2]
arg1[3] = arg2[3]
arg1[4] = arg2[4]
return arg1
