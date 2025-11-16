// 函数: sub_530450
// 地址: 0x530450
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg1
var_8 = arg1 + 0x31c
sub_530ba0(arg1 + 0x304, &var_8)
var_8 = arg1 + 0x1d58
sub_530ba0(arg1 + 0x304, &var_8)
var_8 = arg1 + 0x2a58
sub_530ba0(arg1 + 0x304, &var_8)
var_8 = arg1 + 0x4738
sub_530ba0(arg1 + 0x304, &var_8)
var_8 = arg1 + 0x4fa0
sub_530ba0(arg1 + 0x304, &var_8)
var_8 = arg1 + 0x53dc
sub_530ba0(arg1 + 0x304, &var_8)
var_8 = arg1 + 0x3a88
sub_530ba0(arg1 + 0x304, &var_8)
var_8 = arg1 + 0x58c4
sub_530ba0(arg1 + 0x304, &var_8)
var_8 = arg1 + 0x5fd0
sub_530ba0(arg1 + 0x304, &var_8)
var_8 = arg1 + 0x676c
sub_530ba0(arg1 + 0x304, &var_8)
var_8 = arg1 + 0x6de8
sub_530ba0(arg1 + 0x304, &var_8)
var_8 = arg1 + 0x89c4
sub_530ba0(arg1 + 0x304, &var_8)
int32_t edi = 0
int32_t result = *(arg1 + 0x308) - *(arg1 + 0x304)

if ((result & 0xfffffffc) s> 0)
    do
        (*(**(*(arg1 + 0x304) + (edi << 2)) + 8))()
        void* ecx_15 = *(*(arg1 + 0x304) + (edi << 2))
        edi += 1
        int32_t eax_15
        eax_15.b = *(arg1 + 0xb8)
        *(ecx_15 + 0xb8) = eax_15.b
        result = (*(arg1 + 0x308) - *(arg1 + 0x304)) s>> 2
    while (edi s< result)

return result
