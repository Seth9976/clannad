// 函数: sub_4e83c9
// 地址: 0x4e83c9
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg1
var_8 = 0
int32_t esi
int32_t var_c = esi
int32_t* eax = arg6[8](arg6[0xa], 0x13, 4)

if (eax == 0)
    return 0xfffffffc

int32_t result = sub_4e8035(arg3, arg2, 0x13, 0x13, 0, 0, arg4, arg5, &var_8, eax)

if (result == 0xfffffffd)
    arg6[6] = "oversubscribed dynamic bit lengths tree"
else if (result == 0xfffffffb || *arg3 == 0)
    arg6[6] = "incomplete dynamic bit lengths tree"
    result = 0xfffffffd

arg6[9](arg6[0xa], eax)
return result
