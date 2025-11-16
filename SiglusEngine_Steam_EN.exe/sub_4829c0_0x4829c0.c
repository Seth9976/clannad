// 函数: sub_4829c0
// 地址: 0x4829c0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
void* result = &data_928db0
int32_t ebx = 0
void* result_1 = &data_928db0

for (void* i = &data_ef2f00; i s< 0xf2e700; )
    if (ebx u<= 0xff)
        sub_4d1ba0(sub_4d1ba0(result, 0x24, result, 0), 0x3b8, i - 8, 0)
        result = result_1
        bool cond:0_1 = data_702fc0 == 0
        *(i - 8) = 0
        *(i - 4) = 0
        *i = 0
        *(i + 4) = 0
        *(i + 8) = 0
        *(i + 0x14) = 0
        *(i + 0x18) = 0
        *(i + 0x50) = 0
        *(i + 0x54) = 0
        *(i + 0x1c) = 0xffffffff
        *(i + 0x58) = 0
        
        if (not(cond:0_1))
            *((ebx << 2) + &data_20c47f4) += 1
    
    result += 0x24
    i += 0x3b8
    ebx += 1
    result_1 = result

return result
