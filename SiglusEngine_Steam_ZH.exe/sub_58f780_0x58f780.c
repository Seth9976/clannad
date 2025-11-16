// 函数: sub_58f780
// 地址: 0x58f780
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
RECT rect
__builtin_memset(&rect, 0, 0x10)
GetClientRect(*(arg1 + 0x2fc), &rect)
int32_t edi_1 = rect.right - rect.left
int32_t var_44 = edi_1
__builtin_memset(&rect, 0, 0x10)
int32_t ecx = GetClientRect(*(arg1 + 0x2fc), &rect)
int32_t result = rect.bottom - rect.top

if (edi_1 s> 0 && result s> 0)
    int32_t var_60_2 = 0
    void* ebx_1 = arg1 + 0x538
    sub_6c8170(ebx_1, edi_1, result, ecx, 0)
    sub_6c8510(ebx_1, 0xff0000ff)
    int32_t* eax_3 = sub_601110(data_bac468 + 0xd8, 0)
    
    if (eax_3 != 0)
        int32_t eax_5
        int32_t edx_1
        edx_1:eax_5 = sx.q(eax_3[2])
        int32_t eax_6 = eax_3[1]
        int32_t edx_4 = ((edx_1 & 7) + eax_5) s>> 3
        int32_t temp0_1 = divs.dp.d(sx.q(eax_3[4]), eax_6 * edx_4)
        char* esi_2 = (*(*eax_3 + 0x18))()
        
        if (esi_2 != 0)
            int32_t ebx_2 = 0
            int32_t var_30_1 = 0
            
            if (edi_1 s> 0)
                int32_t ecx_8 = temp0_1
                int32_t eax_11 = 0
                int32_t var_34_1 = 0
                
                do
                    int32_t i_2 =
                        divs.dp.d(sx.q(eax_11 + ecx_8), edi_1) - divs.dp.d(sx.q(var_34_1), edi_1)
                    int32_t i_3
                    int32_t var_6c_2
                    int32_t var_38
                    int32_t var_20
                    int32_t ecx_11
                    
                    if (edx_4 == 1)
                        int32_t edi_2 = 0
                        var_20 = 0
                        
                        if (i_2 s> 0)
                            int32_t i
                            
                            do
                                int32_t eax_20
                                int32_t edx_10
                                edx_10:eax_20 = sx.q(*esi_2)
                                int32_t eax_22 = (eax_20 ^ edx_10) - edx_10
                                int32_t* edx_11 = &var_20
                                var_38 = eax_22
                                
                                if (eax_22 s>= edi_2)
                                    edx_11 = &var_38
                                
                                esi_2 = &esi_2[eax_6]
                                edi_2 = *edx_11
                                var_20 = edi_2
                                i = i_2
                                i_2 -= 1
                            while (i != 1)
                            ebx_2 = var_30_1
                        
                        int32_t edi_3 = edi_2 * result
                        int32_t var_68_2 = 0xff00ff00
                        int32_t eax_24
                        int32_t edx_12
                        edx_12:eax_24 = sx.q(edi_3)
                        var_6c_2 = (eax_24 + (edx_12 & 0x7f)) s>> 7
                        int32_t eax_28
                        char edx_14
                        edx_14:eax_28 = sx.q(edi_3)
                        i_3 = i_2
                        ecx_11 = (zx.d(edx_14) + eax_28) s>> 8
                    label_58f957:
                        int32_t eax_41
                        int32_t edx_22
                        edx_22:eax_41 = sx.q(result)
                        sub_6c85b0(ebx_1, ebx_2, ((eax_41 - edx_22) s>> 1) - ecx_11, i_3, var_6c_2)
                        edi_1 = var_44
                    else if (edx_4 == 2)
                        int32_t edi_4 = 0
                        var_20 = 0
                        
                        if (i_2 s> 0)
                            int32_t i_1
                            
                            do
                                int32_t eax_31
                                int32_t edx_16
                                edx_16:eax_31 = sx.q(*esi_2)
                                int32_t eax_33 = (eax_31 ^ edx_16) - edx_16
                                int32_t* edx_17 = &var_20
                                var_38 = eax_33
                                
                                if (eax_33 s>= edi_4)
                                    edx_17 = &var_38
                                
                                esi_2 = &esi_2[eax_6 * 2]
                                edi_4 = *edx_17
                                var_20 = edi_4
                                i_1 = i_2
                                i_2 -= 1
                            while (i_1 != 1)
                            ebx_2 = var_30_1
                        
                        int32_t edi_5 = edi_4 * result
                        int32_t var_68_3 = 0xff00ff00
                        int32_t eax_35
                        int32_t edx_18
                        edx_18:eax_35 = sx.q(edi_5)
                        var_6c_2 = (eax_35 + (edx_18 & 0x7fff)) s>> 0xf
                        int32_t eax_39
                        int16_t edx_20
                        edx_20:eax_39 = sx.q(edi_5)
                        i_3 = i_2
                        ecx_11 = (zx.d(edx_20) + eax_39) s>> 0x10
                        goto label_58f957
                    ebx_2 += 1
                    ecx_8 = temp0_1
                    eax_11 = var_34_1 + ecx_8
                    var_30_1 = ebx_2
                    var_34_1 = eax_11
                while (ebx_2 s< edi_1)
    
    if (*(ebx_1 + 0x34) == 0)
        result = 0
    else
        result = *(ebx_1 + 0x48)
    
    HWND hWnd = *(arg1 + 0x2fc)
    
    if (hWnd != 0)
        result = SendMessageW(hWnd, 0x172, 0, result)
        
        if (result != 0)
            result = DeleteObject(result)

sub_745f2b(eax_1 ^ &__saved_ebp)
return result
