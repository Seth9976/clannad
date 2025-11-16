// 函数: sub_4e0ea0
// 地址: 0x4e0ea0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = arg1
int32_t edi
int32_t var_24 = edi
int32_t (__stdcall** eax_1)(void* arg1) = (*esi[1])(esi, 1, 0xa0)
bool cond:0 = esi[0x4c] == 0
esi[0x72] = eax_1
*eax_1 = sub_4e0020
eax_1[1] = sub_4e0050
eax_1[2] = 0

if (not(cond:0))
    void* eax_3 = *esi
    *(eax_3 + 0x14) = 0x19
    (*eax_3)(esi)

int32_t var_8_1

if (esi[0x13] != 0)
    var_8_1 = 1

if (esi[0x13] == 0 || esi[0x50] s<= 1)
    var_8_1 = 0

void* result = esi[0x37]
void* result_1 = nullptr

if (esi[9] s> 0)
    int32_t* eax_4 = result + 0x24
    arg1 = eax_4
    void* ebx_1 = &eax_1[0xd]
    
    while (true)
        int32_t ecx_2 = *eax_4
        int32_t edi_1 = esi[0x50]
        int32_t temp0_1 = divs.dp.d(sx.q(eax_4[-7] * ecx_2), edi_1)
        int32_t temp0_2 = divs.dp.d(sx.q(arg1[-6] * ecx_2), edi_1)
        bool cond:3_1 = arg1[3] != 0
        int32_t edx_4 = esi[0x4f]
        int32_t eax_13 = esi[0x4e]
        *(ebx_1 + 0x30) = temp0_2
        
        if (not(cond:3_1))
            *ebx_1 = sub_4e0160
        else if (temp0_1 != eax_13 || temp0_2 != edx_4)
            int32_t edi_4 = temp0_1 * 2
            
            if (edi_4 != eax_13)
            label_4e0ff3:
                int32_t eax_18
                int32_t edx_6
                edx_6:eax_18 = sx.q(eax_13)
                int32_t eax_21
                int32_t edx_8
                
                if (mods.dp.d(edx_6:eax_18, temp0_1) == 0)
                    edx_8:eax_21 = sx.q(esi[0x4f])
                
                if (mods.dp.d(edx_6:eax_18, temp0_1) != 0 || mods.dp.d(edx_8:eax_21, temp0_2) != 0)
                    void* eax_23 = *esi
                    *(eax_23 + 0x14) = 0x26
                    (*eax_23)(esi)
                else
                    int32_t edx_9
                    edx_9.b = (divs.dp.d(edx_6:eax_18, temp0_1)).b
                    *ebx_1 = sub_4e0180
                    *(result_1 + eax_1 + 0x8c) = edx_9.b
                    *(result_1 + eax_1 + 0x96) = (divs.dp.d(edx_8:eax_21, temp0_2)).b
            else if (temp0_2 != edx_4)
                if (edi_4 != eax_13 || temp0_2 * 2 != edx_4)
                    goto label_4e0ff3
                
                if (var_8_1 == 0 || arg1[1] u<= 2)
                    *ebx_1 = sub_4e02d0
                else
                    *ebx_1 = sub_4e0e20
                    eax_1[2] = 1
            else if (var_8_1 == 0 || arg1[1] u<= 2)
                *ebx_1 = sub_4e0270
            else
                *ebx_1 = sub_4e0da0
            
            int32_t eax_24
            eax_24.b = eax_1[2] == 1
            *(ebx_1 - 0x28) = (*(esi[1] + 8))(esi, 1, sub_498550(esi[0x1c], esi[0x4e]), 
                esi[0x4f] * (eax_24 * 2 + 1))
        else
            *ebx_1 = sub_4e0140
        
        result = result_1 + 1
        ebx_1 += 4
        result_1 = result
        arg1 = &arg1[0x15]
        
        if (result s>= esi[9])
            break
        
        eax_4 = arg1

return result
