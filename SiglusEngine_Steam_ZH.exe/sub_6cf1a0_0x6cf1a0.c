// 函数: sub_6cf1a0
// 地址: 0x6cf1a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg3 == 0)
    return 

if ((*(arg3 + 0x74) & 0x8000) == 0)
    uint32_t eax = zx.d(*(arg3 + 0x14f))
    
    if (eax == 0)
        if (*(arg3 + 0x150) u< 8)
            if ((*(arg3 + 0x78) & &__dos_header) != 0)
                return sub_6d4470(arg3, "png_set_filler is invalid for low bit depth gray output")
                    __tailcall
            
            noreturn sub_6d42e0(arg3, "png_set_filler is invalid for low bit depth gray output")
                __tailcall
        
        *(arg3 + 0x154) = 2
    else
        if (eax != 2)
            if ((*(arg3 + 0x78) & &__dos_header) != 0)
                return sub_6d4470(arg3, "png_set_filler: inappropriate color type") __tailcall
            
            noreturn sub_6d42e0(arg3, "png_set_filler: inappropriate color type") __tailcall
        
        *(arg3 + 0x154) = 4
else
    *(arg3 + 0x158) = arg2

*(arg3 + 0x7c) |= 0x8000

if (arg4 != 1)
    *(arg3 + 0x78) &= 0xffffff7f
    return 

*(arg3 + 0x78) |= 0x80
