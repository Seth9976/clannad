// 函数: sub_41c010
// 地址: 0x41c010
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg1

if (arg1 == 0 || arg2 s<= 0)
    return 0xffffffff

int32_t result_1 = data_134ce50:0xc
int32_t result = result_1
BOOL eax_2
int32_t ecx

if (data_134ce50.d != 0)
    void* edx = data_134ce50:8
    eax_2 = result_1 + arg2
    
    if (edx s<= eax_2)
        void* eax_4 = edx + 0x2800 + arg2
        data_134ce50:8 = eax_4
        eax_2 = sub_4d6ae0(eax_4, &data_134ce50:4, &data_134ce50, eax_4)
        result_1 = data_134ce50:0xc
    
    ecx = result_1 + data_134ce50:4
else
    data_134ce50:8 = 0x2800
    int32_t eax
    eax_2 = sub_4d6960(eax, &data_134ce50:4, &data_134ce50, 0x2800, "AVG_FLAG_INI_STR_MEMORY")
    ecx = data_134ce50:4

sub_4d1c30(eax_2, arg1, ecx, arg2)
data_134ce50:0xc += arg2
return result
