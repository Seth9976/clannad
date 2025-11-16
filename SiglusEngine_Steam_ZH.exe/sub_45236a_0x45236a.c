// 函数: sub_45236a
// 地址: 0x45236a
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = nullptr
void* ebx = arg2
int32_t* esi = arg4
int32_t edi
int32_t var_1c = edi
int32_t* edi_1 = arg3

if (edi_1 != 0)
    int32_t eax_2 = (*(*edi_1 + 0x10))(edi_1)
    
    if (*esi + 1 u<= eax_2)
        *(ebx + 0x28) = *((*(*edi_1 + 0xc))(edi_1) + (*esi << 2))

*esi += 1

if (edi_1 != 0)
    int32_t eax_7 = (*(*edi_1 + 0x10))(edi_1)
    
    if (*esi + 1 u<= eax_7)
        *(ebx + 0x2c) = *((*(*edi_1 + 0xc))(edi_1) + (*esi << 2))

*esi += 1

if (edi_1 != 0)
    int32_t eax_12 = (*(*edi_1 + 0x10))(edi_1)
    
    if (*esi + 1 u<= eax_12)
        arg2 = *((*(*edi_1 + 0xc))(edi_1) + (*esi << 2))

*esi += 1

if (edi_1 != 0 && (*(*edi_1 + 0x10))(edi_1) u>= *esi)
    int32_t* eax_18 = sub_44383a(arg1, *(ebx + 0x28))
    arg3 = eax_18
    
    if (eax_18 s>= 0)
        int32_t* var_10_1 = nullptr
        arg4 = nullptr
        
        if (*(ebx + 0x2c) u> 0)
            while (true)
                int32_t* eax_19 = sub_745f3f(0x50)
                
                if (eax_19 == 0)
                    var_8 = nullptr
                else
                    var_8 = sub_44cb3f(eax_19)
                
                if (var_8 == 0)
                    return 0x8007000e
                
                int32_t* var_20_9 = esi
                int32_t* var_24_1 = edi_1
                int32_t* eax_21 = sub_45222f(arg1, var_8)
                arg3 = eax_21
                
                if (eax_21 s< 0)
                    break
                
                if (var_10_1 != 0)
                    var_10_1[0xf] = var_8
                else
                    *(ebx + 0x30) = var_8
                
                int32_t* eax_24 = var_8
                var_8 = nullptr
                arg4 += 1
                var_10_1 = eax_24
                
                if (arg4 u>= *(ebx + 0x2c))
                    goto label_452499
            
            goto label_4524d9
        
    label_452499:
        int32_t* eax_27 = sub_44cc21(zx.d(*(ebx + 0x34)) * 0x64 + *(arg1 + 0x2c), arg2.w)
        arg3 = eax_27
        
        if (eax_27 s>= 0)
            arg4 = nullptr
            
            if (arg2 u> 0)
                do
                    int32_t* eax_29 = sub_449291(arg1, *(ebx + 0x34), arg4.w, edi_1, esi)
                    arg3 = eax_29
                    
                    if (eax_29 s< 0)
                        return arg3
                    
                    arg4 += 1
                while (zx.d(arg4.w) u< arg2)
                
            label_4524d9:
                
                if (var_8 != 0)
                    sub_44cbb2(var_8, 1)
    
    return arg3

return 0x80004005
