// 函数: sub_449291
// 地址: 0x449291
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
int32_t edi
int32_t var_14 = edi
void* edi_3 = zx.d(arg2) * 0x64 + *(arg1 + 0x2c)
int32_t* esi_2 = zx.d(arg3) * 0x64 + *(edi_3 + 4)
*esi_2 = 0
esi_2[7] = 0

if (arg4 != 0)
    int32_t eax_1 = (*(*arg4 + 0x10))(arg4)
    
    if (*arg5 + 1 u<= eax_1)
        *(esi_2 + 0x52) = *((*(*arg4 + 0xc))(arg4) + (*arg5 << 2))

*arg5 += 1

if (arg4 != 0)
    int32_t eax_6 = (*(*arg4 + 0x10))(arg4)
    
    if (*arg5 + 1 u<= eax_6)
        esi_2[0x15] = *((*(*arg4 + 0xc))(arg4) + (*arg5 << 2))

*arg5 += 1

if (arg4 != 0)
    int32_t eax_11 = (*(*arg4 + 0x10))(arg4)
    
    if (*arg5 + 1 u<= eax_11)
        esi_2[8] = *((*(*arg4 + 0xc))(arg4) + (*arg5 << 2))

*arg5 += 1

if (arg4 != 0)
    int32_t eax_16 = (*(*arg4 + 0x10))(arg4)
    
    if (*arg5 + 1 u<= eax_16)
        esi_2[9] = *((*(*arg4 + 0xc))(arg4) + (*arg5 << 2))

*arg5 += 1

if (arg4 == 0)
    arg2.d = 0x80004005
else if ((*(*arg4 + 0x10))(arg4) u< *arg5)
    arg2.d = 0x80004005
else
    int32_t eax_21
    eax_21.w = *(esi_2 + 0x52)
    arg2.d = 0
    
    if (eax_21.w u>= 0xb6)
        arg2.d = 0x80004005
    else
        void* ecx_22 = zx.d(eax_21.w) * 0x1c
        int32_t eax_22 = *(ecx_22 + 0xac1bc0)
        
        if (eax_22 != 0 && eax_22 u<= zx.d(esi_2[0x15].w))
            arg2.d = 0x80004005
        else if (eax_22 != 0x105)
        label_4493d5:
            *(esi_2 + 0x56) = 0
            int32_t eax_23 = *(ecx_22 + 0xac1bc4)
            esi_2[0x16] = eax_23
            uint32_t eax_39
            uint32_t eax_60
            
            if (eax_23 u> 0xc020000)
                if (eax_23 u<= 0xd000004)
                    if (eax_23 == 0xd000004)
                    label_449555:
                        *(esi_2 + 0x56) = 1
                    label_44955b:
                        *(esi_2 + 0x56) += 1
                    label_44955f:
                        *(esi_2 + 0x56) += 1
                    label_449563:
                        *(esi_2 + 0x56) += 1
                        int32_t ecx_38 = *(ecx_22 + 0xac1bc4)
                        
                        if (ecx_38 == 0xd000001 || ecx_38 == 0xd000002 || ecx_38 == 0xd000003
                                || ecx_38 == 0xd000004)
                            *(esi_2 + 0x52) = 0x9c
                            esi_2[0x16] = 0xd000000
                        else
                            *(esi_2 + 0x52) = 0x94
                            esi_2[0x16] = 0xc000000
                        
                        goto label_4495ac
                    
                    if (eax_23 == 0xd000000)
                    label_4495ac:
                        int32_t eax_46 = *(zx.d(*(esi_2 + 0x52)) * 0x1c + 0xac1bc4)
                        
                        if (eax_46 == 0xd000000 || eax_46 == 0xc000000)
                            arg3.d = esi_2[8] + *(arg1 + 0x20)
                            *(esi_2 + 0x56) = sub_442bf5(&arg3, 4)
                        
                        eax_60 = zx.d(*(esi_2 + 0x56))
                        goto label_449676
                    
                    if (eax_23 == 0xd000001)
                        goto label_449563
                    
                    if (eax_23 == 0xd000002)
                        goto label_44955f
                    
                    if (eax_23 == 0xd000003)
                        goto label_44955b
                    
                    goto label_449604
                
                if (eax_23 == 0xd010000)
                label_4494ce:
                    arg3.d = esi_2[8] + *(arg1 + 0x20)
                    int16_t eax_37 = sub_442bf5(&arg3, 1)
                    *(esi_2 + 0x56) = eax_37
                    eax_39 = zx.d(eax_37) << 2
                    *esi_2 = 1
                label_4494e8:
                    esi_2[0xc] &= 0xfffffffd
                    
                    if (eax_39 u> 0)
                        goto label_4494f0
                    
                    esi_2[0x12] = 0
                else
                    if (eax_23 == 0xd020000)
                        goto label_449663
                    
                    if (eax_23 != 0xe000000 && eax_23 != 0xf000000)
                    label_449604:
                        int32_t eax_50 = *(ecx_22 + 0xac1bb4)
                        int32_t edx_7
                        
                        if (eax_50 == 1 || eax_50 == 2 || eax_50 == 3 || eax_50 == 0xf20000)
                            edx_7 = 4
                        else
                            edx_7 = 0
                        
                        eax_39 = *(ecx_22 + 0xac1bbc) * *(ecx_22 + 0xac1bb8) * edx_7
                        *(esi_2 + 0x56) = 1
                        *esi_2 = 1
                        goto label_4494e8
                    
                    *(esi_2 + 0x56) = 1
                    *(edi_3 + 0x34) += 1
                    *esi_2 = 0
                    esi_2[0xc] &= 0xfffffffd
                    eax_39 = 4
                label_4494f0:
                    int32_t ecx_27 = *(edi_3 + 0xc)
                    int32_t ecx_29 = (ecx_27 & 3) + (ecx_27 u>> 2 << 2)
                    int32_t ecx_31 = (ecx_29 & 1) + (ecx_29 u>> 1 << 1)
                    int32_t ecx_33 = (ecx_31 & 3) + (ecx_31 u>> 2 << 2)
                    int32_t ecx_35 = (ecx_33 & 3) + (ecx_33 u>> 2 << 2)
                    int32_t ecx_37 = (ecx_35 & 3) + (ecx_35 u>> 2 << 2)
                    *(edi_3 + 0xc) = ecx_37
                    esi_2[0x12] = ecx_37
                    *(edi_3 + 0xc) += eax_39
            else
                if (eax_23 == 0xc020000)
                label_449663:
                    arg3.d = esi_2[8] + *(arg1 + 0x20)
                    int16_t eax_59 = sub_442bf5(&arg3, 4)
                    *(esi_2 + 0x56) = eax_59
                    eax_60 = zx.d(eax_59)
                label_449676:
                    eax_39 = eax_60 << 4
                    *esi_2 = 1
                    goto label_4494e8
                
                if (eax_23 u> 0xc000001)
                    if (eax_23 == 0xc000002)
                        goto label_44955f
                    
                    if (eax_23 == 0xc000003)
                        goto label_44955b
                    
                    if (eax_23 == 0xc000004)
                        goto label_449555
                    
                    if (eax_23 != 0xc010000)
                        goto label_449604
                    
                    goto label_4494ce
                
                if (eax_23 == 0xc000001)
                    goto label_449563
                
                if (eax_23 != 0x9000000)
                    if (eax_23 == 0xa000000)
                        eax_23.w = arg3
                        *(edi_3 + 0x18) = eax_23.w
                    else
                        if (eax_23 != 0xb000000)
                            if (eax_23 == 0xc000000)
                                goto label_4495ac
                            
                            goto label_449604
                        
                        eax_23.w = arg3
                        *(edi_3 + 0x1a) = eax_23.w
                    
                    *(*(arg1 + 0x18) + *(esi_2[9] + *(arg1 + 0x20)) * 0x18) =
                        *(zx.d(*(esi_2 + 0x52)) * 0x1c + 0xac1bb4)
                    goto label_449484
                
                *(*(arg1 + 0x18) + *(esi_2[9] + *(arg1 + 0x20)) * 0x18) = *(ecx_22 + 0xac1bb4)
            label_449484:
                *esi_2 = 0
                esi_2[0xc] &= 0xfffffffd
                *(esi_2 + 0x56) = 1
                esi_2[0x12] = 0
        else
            eax_22.w = esi_2[0x15].w
            
            if (eax_22.w u< 0x10 || eax_22.w == 0x101 || eax_22.w == 0x102 || eax_22.w == 0x103
                    || eax_22.w == 0x104)
                if (*(ecx_22 + 0xac1bc4) != 0x300000d)
                    goto label_4493d5
                
                arg2.d = 0x80004005
            else
                if (eax_22.w == 0x100)
                    goto label_4493d5
                
                arg2.d = 0x80004005

return arg2.d
