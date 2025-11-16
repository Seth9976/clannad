// 函数: sub_4cafe0
// 地址: 0x4cafe0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (*(arg1 + 4) != 0)
    return 1

if (CoCreateInstance(&data_606600, 0, CLSCTX_INPROC_SERVER, &data_6065f0, arg1 + 4) s< 0)
    *(arg1 + 4) = 0
    return 0

int32_t* ecx = *(arg1 + 4)

if ((**ecx)(ecx, 0x606610, arg1 + 0xc) s>= 0)
    int32_t* ecx_1 = *(arg1 + 0xc)
    
    if ((*(*ecx_1 + 0x1c))(ecx_1, arg1 + 0x1a0) s>= 0)
        int32_t* ecx_2 = *(arg1 + 4)
        
        if ((**ecx_2)(ecx_2, 0x606620, arg1 + 0x14) s>= 0)
            int32_t* ecx_3 = *(arg1 + 4)
            
            if ((**ecx_3)(ecx_3, 0x606630, arg1 + 0x18) s>= 0)
                int32_t* ecx_4 = *(arg1 + 4)
                
                if ((**ecx_4)(ecx_4, 0x606640, arg1 + 0x10) s>= 0)
                    int32_t* ecx_5 = *(arg1 + 4)
                    
                    if ((**ecx_5)(ecx_5, 0x606650, arg1 + 8) s>= 0)
                        return 1

sub_4caf70(arg1)
return 0
