// 函数: sub_6d0330
// 地址: 0x6d0330
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1 == 0)
    return 

int32_t eax_1 = *(arg1 + 0x78)

if ((eax_1.b & 0x40) != 0)
    if ((eax_1 & &__dos_header) != 0)
        return sub_6d4470(arg1, "invalid after png_start_read_image or png_read_update_info")
            __tailcall
    
    noreturn sub_6d42e0(arg1, "invalid after png_start_read_image or png_read_update_info")
        __tailcall

*(arg1 + 0x7c) |= 0x400
*(arg1 + 0x78) = eax_1 | 0x4000
