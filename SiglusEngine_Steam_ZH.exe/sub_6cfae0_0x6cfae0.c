// 函数: sub_6cfae0
// 地址: 0x6cfae0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t var_4 = arg1

if (arg1 == 0)
    return 

int32_t eax_1 = *(arg1 + 0x78)

if ((eax_1.b & 0x40) != 0)
    if ((eax_1 & &__dos_header) == 0)
        sub_6d42e0(arg1, "png_read_update_info/png_start_read_image: duplicate call")
        noreturn
    
    sub_6d4470(arg1, "png_read_update_info/png_start_read_image: duplicate call")
    return 

sub_6dca30(arg1)
sub_6d1150(arg1, arg2)
