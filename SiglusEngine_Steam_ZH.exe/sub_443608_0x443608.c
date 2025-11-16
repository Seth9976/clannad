// 函数: sub_443608
// 地址: 0x443608
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* ebx = arg3
int32_t* esi = arg2
int32_t edi
int32_t var_20 = edi
int32_t eax_2

if (esi != 0)
    eax_2 = (*(*esi + 0x10))(esi)

int32_t var_10
int32_t edi_1

if (esi == 0 || *ebx + 1 u> eax_2)
    edi_1 = var_10
else
    edi_1 = *((*(*esi + 0xc))(esi) + (*ebx << 2))
    var_10 = edi_1

*ebx += 1

if (esi != 0)
    int32_t eax_6 = (*(*esi + 0x10))(esi)
    
    if (*ebx + 1 u<= eax_6)
        arg3 = *((*(*esi + 0xc))(esi) + (*ebx << 2))

*ebx += 1

if (esi != 0 && (*(*esi + 0x10))(esi) u>= *ebx && edi_1 u< *(arg1 + 0x14))
    int32_t eax_13 = sub_745f3f(arg3)
    
    if (eax_13 != 0)
        if (arg3 != 0)
            void* eax_15 = arg3 & 3
            char temp1_1 = eax_15.b
            eax_15.b = neg.b(eax_15.b)
            int32_t edi_2 = neg.d(sbb.d(eax_15, eax_15, temp1_1 != 0)) + (arg3 u>> 2)
            int32_t eax_19 = (*(*esi + 0x10))(esi)
            
            if (*ebx + edi_2 u<= eax_19)
                int32_t esi_2
                int32_t edi_4
                edi_4, esi_2 =
                    __builtin_memcpy(eax_13, (*(*esi + 0xc))(esi) + (*ebx << 2), arg3 u>> 2 << 2)
                __builtin_memcpy(edi_4, esi_2, arg3 & 3)
                esi = arg2
            
            *ebx += edi_2
            edi_1 = var_10
        
        if ((*(*esi + 0x10))(esi) u< *ebx)
            arg2 = 0x80004005
        else
            arg2 = nullptr
            int32_t* ebx_1 = *(arg1 + 0x18) + edi_1 * 0x18
            
            if (ebx_1[1] != 0 || ebx_1[2] != 0)
                arg2 = 0x80004005
            else if (arg3 != 0)
                int32_t eax_26 = *ebx_1
                
                if (eax_26 == 4)
                    if (*(arg3 + eax_13 - 1) != 0)
                        arg2 = 0x80004005
                    else
                        void* var_24_14 = &ebx_1[1]
                        int32_t* var_28_2 = arg3
                        int32_t* eax_40 = sub_458de2()
                        arg2 = eax_40
                        
                        if (eax_40 s>= 0)
                            int32_t* edi_8 = ebx_1[1]
                            int32_t esi_9
                            int32_t edi_10
                            edi_10, esi_9 =
                                __builtin_memcpy((*(*edi_8 + 0xc))(edi_8), eax_13, arg3 u>> 2 << 2)
                            __builtin_memcpy(edi_10, esi_9, arg3 & 3)
                else if (eax_26 s<= 0xe || eax_26 s> 0x10)
                    arg2 = 0x80004005
                else
                    void* var_24_10 = &ebx_1[2]
                    int32_t* var_28_1 = arg3
                    int32_t* eax_27 = sub_458de2()
                    arg2 = eax_27
                    
                    if (eax_27 s>= 0)
                        int32_t* eax_28 = ebx_1[2]
                        int32_t esi_5
                        int32_t edi_7
                        edi_7, esi_5 =
                            __builtin_memcpy((*(*eax_28 + 0xc))(eax_28), eax_13, arg3 u>> 2 << 2)
                        __builtin_memcpy(edi_7, esi_5, arg3 & 3)
                        int32_t eax_31 = *ebx_1
                        
                        if (eax_31 == 0x10)
                            sub_44354c(arg1, ebx_1)
                            *(zx.d(ebx_1[4].w) * 0x64 + *(arg1 + 0x2c) + 0x18) = 0
                        else if (eax_31 == 0xf)
                            sub_4435aa(arg1, ebx_1)
                            *(zx.d(ebx_1[4].w) * 0x64 + *(arg1 + 0x2c) + 0x1a) = 0
                        
                        **(zx.d(ebx_1[4].w) * 0x64 + *(arg1 + 0x2c) + 4) = 1
    else
        arg2 = 0x8007000e
    
    if (eax_13 != 0)
        j__free(eax_13)
    
    return arg2

return 0x80004005
