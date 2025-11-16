// 函数: sub_57d530
// 地址: 0x57d530
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg1
int32_t ebx = 0
int32_t result = arg1
int32_t result_1 = result
void* i = &data_8fcae4
void* edi = &data_1090aec

do
    if (ebx u<= 0x3f)
        int32_t result_2
        
        if (result == 0xffffffff)
            result_2 = *(edi - 4)
        else if (result s<= 0x100)
            result_2 = result
            
            if (result s< 8)
                result_2 = 8
        else
            result_2 = 0x100
        
        int32_t eax = *edi
        *i = *(edi + 4)
        *(i - 8) = result_2
        *(i - 4) = eax
        sub_57f830(ebx)
        result = result_1
    
    i += 0x2d0
    ebx += 1
    edi += 0x1d4
while (i s< &data_907ee4)

return result
