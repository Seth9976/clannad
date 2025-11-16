// 函数: sub_42f010
// 地址: 0x42f010
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
bool cond:0 = *(arg1 + 0xc0) == 0
*(arg1 + 0x64) = 0
*(arg1 + 0x68) = 0

if (not(cond:0) && *(arg1 + 0xe4) != 0)
    int32_t edi_1
    
    if (*(arg1 + 0xd4) != 0)
        edi_1 = *(arg1 + 0xd8)
    
    if (*(arg1 + 0xd4) != 0 && edi_1 s> 0)
        int32_t ebx_1
        
        if (*(arg1 + 0xdc) != 0)
            ebx_1 = *(arg1 + 0xe0)
        
        if (*(arg1 + 0xdc) == 0 || ebx_1 s<= 0)
            *(arg1 + 0x64) = modu.dp.d(0:(sub_4d18c0(2)), *(arg1 + 0xd8))
        else
            int32_t eax_1 = sub_4d18c0(2)
            int32_t edx_1 = 0
            
            if (edi_1 s>= ebx_1)
                uint32_t temp1_4 = modu.dp.d(edx_1:eax_1, ebx_1)
                int32_t temp0_3 = divs.dp.d(sx.q(*(arg1 + 0xd8)), ebx_1)
                *(arg1 + 0x68) = temp1_4
                
                if (temp0_3 s< 2)
                    *(arg1 + 0x64) = temp1_4
                else
                    *(arg1 + 0x64) = modu.dp.d(0:(sub_4d18c0(2)), temp0_3) * ebx_1 + temp1_4
            else
                uint32_t temp1_1 = modu.dp.d(edx_1:eax_1, edi_1)
                int32_t temp0_1 = divs.dp.d(sx.q(*(arg1 + 0xe0)), edi_1)
                *(arg1 + 0x64) = temp1_1
                
                if (temp0_1 s< 2)
                    *(arg1 + 0x68) = temp1_1
                else
                    *(arg1 + 0x68) = modu.dp.d(0:(sub_4d18c0(2)), temp0_1) * edi_1 + temp1_1
    else if (*(arg1 + 0xdc) != 0 && *(arg1 + 0xe0) s> 0)
        *(arg1 + 0x64) = modu.dp.d(0:(sub_4d18c0(2)), *(arg1 + 0xe0))

bool cond:1 = *(arg1 + 0x100) == 0
*(arg1 + 0x84) = 0

if (not(cond:1) && *(arg1 + 0x114) s> 0 && *(arg1 + 0x118) != 0)
    *(arg1 + 0x84) = modu.dp.d(0:(sub_4d18c0(2)), *(arg1 + 0x114))
