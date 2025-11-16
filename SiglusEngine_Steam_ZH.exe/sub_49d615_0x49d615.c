// 函数: sub_49d615
// 地址: 0x49d615
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_10 = edi
int32_t (__stdcall* edi_1)(int32_t* arg1, int32_t arg2, int32_t arg3, float* arg4, int32_t arg5) =
    nullptr
int32_t ecx_1 = *(*(arg1 + 0x10) + 8) & 0xffff0000
int32_t eax_10
int32_t eax_29

if (arg3[5] != 0)
    if (ecx_1 == 0xfffe0000)
        uint32_t eax_55 = zx.d(*(arg2 + 4))
        
        if (eax_55 == 0)
            edi_1 = sub_49b182
        else
            eax_29 = eax_55 - 1
            
            if (eax_55 == 1)
                edi_1 = sub_49b233
            else
            label_49d73e:
                
                if (eax_29 == 1)
                    edi_1 = sub_49b2fb
    else if (ecx_1 == 0xffff0000)
        uint32_t eax_51 = zx.d(*(arg2 + 4))
        
        if (eax_51 == 0)
            edi_1 = sub_49b39e
        else
            eax_10 = eax_51 - 1
            
            if (eax_51 == 1)
                edi_1 = sub_49aeb1
            else
            label_49d837:
                
                if (eax_10 == 1)
                    edi_1 = sub_49affe
else if (ecx_1 == 0x54580000)
    if (zx.d(*(arg2 + 4)) == 2)
        uint32_t eax_45 = zx.d(arg3[1])
        
        if (eax_45 == 0)
            edi_1 = sub_49b01c
        else if (eax_45 == 1)
            edi_1 = sub_49b059
        else if (eax_45 == 2)
            edi_1 = sub_49b0bd
        else if (eax_45 == 3)
            edi_1 = sub_49b01c
else if (ecx_1 == 0xfffe0000)
    uint32_t eax_22 = zx.d(*(arg2 + 4))
    
    if (eax_22 == 0)
        uint32_t eax_36 = zx.d(arg3[1])
        
        if (eax_36 == 0)
            edi_1 = sub_49b182
        else if (eax_36 == 1)
            edi_1 = sub_49b182
        else if (eax_36 == 2)
            edi_1 = sub_49b1a0
        else if (eax_36 == 3)
            edi_1 = sub_49b1e1
    else if (eax_22 == 1)
        uint32_t eax_31 = zx.d(arg3[1])
        
        if (eax_31 == 0)
            edi_1 = sub_49b233
        else if (eax_31 == 1)
            edi_1 = sub_49b251
        else if (eax_31 == 2)
            edi_1 = sub_49b233
        else if (eax_31 == 3)
            edi_1 = sub_49b295
    else if (eax_22 == 2)
        uint32_t eax_26 = zx.d(arg3[1])
        
        if (eax_26 == 0)
            edi_1 = sub_49b2fb
        else if (eax_26 == 1)
            edi_1 = sub_49b319
        else
            eax_29 = eax_26 - 2
            
            if (eax_26 != 2)
                goto label_49d73e
            
            edi_1 = sub_49b363
else if (ecx_1 == 0xffff0000)
    uint32_t eax_3 = zx.d(*(arg2 + 4))
    
    if (eax_3 == 0)
        uint32_t eax_16 = zx.d(arg3[1])
        
        if (eax_16 == 0)
            edi_1 = sub_49b39e
        else if (eax_16 == 1)
            edi_1 = sub_49b39e
        else if (eax_16 == 2)
            edi_1 = sub_49b3bc
        else if (eax_16 == 3)
            edi_1 = sub_49b3fd
    else if (eax_3 == 1)
        uint32_t eax_11 = zx.d(arg3[1])
        
        if (eax_11 == 0)
            edi_1 = sub_49aeb1
        else if (eax_11 == 1)
            edi_1 = sub_49aecf
        else if (eax_11 == 2)
            edi_1 = sub_49aeb1
        else if (eax_11 == 3)
            edi_1 = sub_49af13
    else if (eax_3 == 2)
        uint32_t eax_7 = zx.d(arg3[1])
        
        if (eax_7 == 0)
            edi_1 = sub_49affe
        else if (eax_7 == 1)
            edi_1 = sub_49af79
        else
            eax_10 = eax_7 - 2
            
            if (eax_7 != 2)
                goto label_49d837
            
            edi_1 = sub_49afc3
int32_t* eax_57 = sub_745f3f(0x44)
int32_t* result

if (eax_57 == 0)
    result = nullptr
else
    result = sub_49ab59(eax_57, arg1, arg2, arg3, edi_1, arg4)

if (result != 0)
    if (sub_49d8ad(result) s>= 0)
        return result
    
    sub_49b113(result, 1)

return nullptr
