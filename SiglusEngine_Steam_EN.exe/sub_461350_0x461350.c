// 函数: sub_461350
// 地址: 0x461350
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = &data_1b1460c
int32_t var_c = 1
data_1b144c8 = 0
data_1b144b0 = 0
data_1b144b4 = 0
int32_t var_14
int32_t* var_10
int32_t eax
int32_t edx
sub_41cc90(eax, edx, 0x1b144f4, var_14, var_10)
bool cond:0 = data_12998e4 == 0
data_13132a8 = data_1299908
int32_t result = data_129990c
data_1b144cc = 0
data_1b144d0 = 0
data_1b144d4 = 0
data_13132ac = result

if (not(cond:0))
    result = sub_4611f0(nullptr)
    
    if (result == 1)
        int32_t ecx_1
        result, ecx_1 = sub_427370(result, &data_12998e4, &data_1b144b0, 0xffffffff, 0, result, 0, 
            nullptr, result, 0)
        
        if (data_1b144b0 != 0)
            int32_t var_8_1 = ecx_1
            return sub_4611a0(&data_1b144b0)
    else if (data_702fc0 == 0)
        char* var_8_2 = &data_12998e4
        sub_4c84d0(&data_7027c0, 0x619b20)
        return sub_446a50()

return result
