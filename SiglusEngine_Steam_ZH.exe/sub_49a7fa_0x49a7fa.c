// 函数: sub_49a7fa
// 地址: 0x49a7fa
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_c = edi
sub_49981d(arg1, &arg1[0x43])

if ((arg1[0x43].b & 0x20) == 0)
    sub_466959(arg1, "unknown critical chunk")
    noreturn

int32_t eax = arg1[0x16]

if ((eax.b & 4) != 0)
    arg1[0x16] = eax | 8

return sub_49a08a(arg1, arg2)
