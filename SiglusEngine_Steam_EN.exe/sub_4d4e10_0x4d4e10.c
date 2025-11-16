// 函数: sub_4d4e10
// 地址: 0x4d4e10
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t result = arg1
int32_t ebx
ebx.b = arg2

if (result s<= 0xffffffff || result s>= 8)
    result = 1
else if (result == 5 || result == 4)
    if (result - 1 u> 4)
        result = 1
    else
        result = sub_4d4ec0(result - 1)

data_187c518 = result
data_187c520 = result
data_1c0518f = 0
data_1c0518e = 0

if (ebx.b != 0 && result == 0)
    int32_t __saved_ebx_2
    result, __saved_ebx_2 = sub_4d4db0()
    
    if (result.b != 0)
        int32_t eax = data_1af40f4
        data_1c0518f = 1
        
        if (eax == data_1c051d0)
            result = data_1af40f0
        
        if (eax != data_1c051d0 || result != data_1c051cc)
            int32_t __saved_ebx_1 = __saved_ebx_2
            data_1c0518e = 1
            sub_4d5380(&data_1c051d0, &data_1c051cc)
            data_1af40f4 = data_1c051d0
            result = data_1c051cc
            data_1af40f0 = result

return result
