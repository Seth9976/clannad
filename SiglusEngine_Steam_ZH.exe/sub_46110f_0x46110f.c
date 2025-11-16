// 函数: sub_46110f
// 地址: 0x46110f
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = *(arg1 + 0x40)

if (eax == 0)
    int32_t var_c_4 = 0x1f
    sub_460651(arg1)
    sub_460fd3(arg1, arg2)
    int32_t var_c_6 = 0xa
    sub_460651(arg1)
    sub_461015(arg1, arg3)
else if (eax == 1)
    char* var_c_1 = arg2
    sub_4605e0(arg1, "\r\ntemplate %s {")
    sub_460f5b(arg1, *(arg1 + 0x58) + 1)
    sub_46105c(arg1, arg3)
    *(arg1 + 0x58) += 1

return 0
