// 函数: sub_47e266
// 地址: 0x47e266
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t eax_1 = zx.d(arg1)
int32_t __saved_esi_1

if (eax_1 == 1)
    __saved_esi_1 = arg3
    sub_42ac7a(*arg4, arg4[0xc], arg2 + 0x1388, "%s")
else if (eax_1 == 2)
label_47e285:
    int32_t var_c_1 = arg3
    sub_42aba3(*arg4, arg4[0xc], arg2 + 0x1388, "%s")
    arg4[0x13] = 1
else if (eax_1 == 5)
    __saved_esi_1 = arg3
    sub_42ac7a(*arg4, arg4[0xc], arg2 + 0x1388, "%s")
else if (eax_1 == 6)
    goto label_47e285
return 0
