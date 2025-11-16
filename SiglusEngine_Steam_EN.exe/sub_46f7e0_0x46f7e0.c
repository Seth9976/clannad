// 函数: sub_46f7e0
// 地址: 0x46f7e0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_14 = *(arg1 + 0xc)

if (eax_14 != 0 && eax_14 != 1)
    if (eax_14 == 5)
        sub_4b8f20(arg2 + 0x88)
    else if (eax_14 == 7)
        *(arg2 + 0x238) = *(arg2 + 0x234)
        *(arg2 + 0x248) = *(arg2 + 0x244)
        *(arg2 + 0x260) = *(arg2 + 0x25c)
        *(arg2 + 0x240) = *(arg2 + 0x23c)
        *(arg2 + 0x250) = *(arg2 + 0x24c)
        *(arg2 + 0x268) = *(arg2 + 0x264)
    else if (eax_14 == 8)
        void* eax_3 = *(arg2 + 0x27c)
        
        if (eax_3 != 0)
            int32_t i_1 = *(arg2 + 0x274)
            
            if (i_1 s> 0)
                void* eax_4 = eax_3 + 0xd4
                int32_t i
                
                do
                    void* esi_1 = eax_4 - 0x68
                    void* edi_1 = eax_4 + 0x24
                    eax_4 += 0x7d8
                    __builtin_memcpy(edi_1, esi_1, 0x8c)
                    *(eax_4 - 0x7dc) = 0xffffffff
                    *(eax_4 - 0x7d8) = 0xffffffff
                    *(eax_4 - 0x7d4) = 0xffffffff
                    *(eax_4 - 0x7d0) = 0xffffffff
                    i = i_1
                    i_1 -= 1
                while (i != 1)

return sub_41d040(arg2 + 0x59c, arg2 + 0x280, arg2 + 0x30c, arg2 + 0x59c, arg2 + 0x398)
