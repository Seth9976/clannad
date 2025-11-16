// 函数: sub_6d0390
// 地址: 0x6d0390
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1 == 0)
    return 

int32_t eax_1 = *(arg1 + 0x78)

if ((eax_1.b & 0x40) != 0)
    if ((eax_1 & &__dos_header) != 0)
        return sub_6d4470(arg1, "invalid after png_start_read_image or png_read_update_info")
            __tailcall
    
    sub_6d42e0(arg1, "invalid after png_start_read_image or png_read_update_info")
    noreturn

int32_t eax_3 = eax_1 | 0x4000
*(arg1 + 0x78) = eax_3

if ((eax_3.b & 0x40) != 0)
    if ((eax_3 & &__dos_header) == 0)
        sub_6d42e0(arg1, "invalid after png_start_read_image or png_read_update_info")
        noreturn
    
    sub_6d4470(arg1, "invalid after png_start_read_image or png_read_update_info")
    *(arg1 + 0x7c) |= 0x4000
    return 

*(arg1 + 0x7c) |= 0x1000
*(arg1 + 0x7c) |= 0x4000
*(arg1 + 0x78) = eax_3 | 0x4000
