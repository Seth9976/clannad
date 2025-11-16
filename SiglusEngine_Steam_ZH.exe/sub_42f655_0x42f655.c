// 函数: sub_42f655
// 地址: 0x42f655
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* esi = arg2
void* var_c = arg1
int32_t var_8 = 0

if (esi == 0)
    return 0x80004005

int32_t edx_1 = *(esi + 4)
int32_t edi
int32_t var_2c_1 = edi

if (edx_1 == 1)
    int32_t* edi_3 = arg7
    *edi_3 = 0
    *arg8 = nullptr
    
    while (*(esi + 4) == 1)
        void* eax_13 = *(esi + 8)
        
        if (eax_13 == 0)
            break
        
        if (*(eax_13 + 4) != 6)
            break
        
        if (*(eax_13 + 0x10) != 1)
            break
        
        void* eax_14 = *(eax_13 + 0x18)
        
        if (eax_14 == 0)
            break
        
        if (*(eax_14 + 4) != 0xb)
            break
        
        int32_t eax_15 = *(eax_14 + 0x20)
        
        if (eax_15 == 0)
            break
        
        void var_20
        void var_1c
        void var_18
        void var_14
        void var_10
        int32_t eax_16 = sub_42f655(eax_15, &var_20, &var_1c, &var_18, &var_14, &var_10, &arg7)
        
        if (eax_16 s< 0)
            return eax_16
        
        *arg8 += arg7
        esi = *(esi + 0xc)
        *edi_3 += 1
        
        if (esi == 0)
            *arg3 = 0
            *arg4 = 0
            *arg5 = 0
            *arg6 = 0
            return eax_16
    
    var_8 = 0x80004005
else if (edx_1 == 8)
    int32_t eax_6 = *(esi + 0x10)
    
    if (eax_6 == 0)
        var_8 = 0x80004005
    else
        int32_t eax_7 = sub_42f655(eax_6, arg3, arg4, arg5, arg6, arg7, arg8)
        var_8 = eax_7
        
        if (eax_7 s>= 0)
            if (*arg6 == 0)
                *arg6 = 1
            
            *arg6 *= *(esi + 0x14)
            *arg8 *= *(esi + 0x14)
else if (edx_1 == 9)
    *arg6 = 0
    *arg7 = 0
    int32_t edx_5 = *(esi + 0x10)
    int32_t edx_10
    int32_t* edi_1
    
    if (edx_5 == 0)
    label_42f6eb:
        edi_1 = arg4
        edx_10 = 1
        *edi_1 = 1
    label_42f6f6:
        *arg5 = edx_10
        int32_t esi_1 = *(esi + 0x14)
        
        if (esi_1 u> 0x1d)
            sub_42aba3(arg1 + 0x28, nullptr, 0, "ID3DXEffectCompiler: Unexpected component type")
            var_8 = 0x80004005
        else
            void** ecx_5
            
            switch (esi_1)
                case 0
                    *arg3 = 1
                    ecx_5 = arg8
                    *ecx_5 = 4
                case 1, 2, 3, 4, 5, 6, 7, 8, 0xd
                    *arg3 = 2
                    ecx_5 = arg8
                    *ecx_5 = 4
                case 9, 0xa, 0xb, 0xc
                    *arg3 = 3
                    ecx_5 = arg8
                    *ecx_5 = 4
                case 0xe
                    *arg3 = 4
                    ecx_5 = arg8
                    *ecx_5 = 4
                case 0xf
                    *arg3 = 5
                    ecx_5 = arg8
                    *ecx_5 = 4
                case 0x10
                    *arg3 = 6
                    ecx_5 = arg8
                    *ecx_5 = 4
                case 0x11
                    *arg3 = 7
                    ecx_5 = arg8
                    *ecx_5 = 4
                case 0x12
                    *arg3 = 8
                    ecx_5 = arg8
                    *ecx_5 = 4
                case 0x13
                    *arg3 = 9
                    ecx_5 = arg8
                    *ecx_5 = 4
                case 0x14
                    *arg3 = 0xa
                    ecx_5 = arg8
                    *ecx_5 = nullptr
                case 0x15
                    *arg3 = 0xb
                    ecx_5 = arg8
                    *ecx_5 = nullptr
                case 0x16
                    *arg3 = 0xc
                    ecx_5 = arg8
                    *ecx_5 = nullptr
                case 0x17
                    *arg3 = 0xd
                    ecx_5 = arg8
                    *ecx_5 = nullptr
                case 0x18
                    *arg3 = 0xe
                    ecx_5 = arg8
                    *ecx_5 = nullptr
                case 0x19
                    *arg3 = 0xf
                    ecx_5 = arg8
                    *ecx_5 = 4
                case 0x1a
                    *arg3 = 0x10
                    ecx_5 = arg8
                    *ecx_5 = 4
                case 0x1b
                    *arg3 = 0x11
                    ecx_5 = arg8
                    *ecx_5 = 4
                case 0x1c
                    *arg3 = 0x12
                    ecx_5 = arg8
                    *ecx_5 = 4
                case 0x1d
                    *arg3 = &data_f30000
                    ecx_5 = arg8
                    *ecx_5 = nullptr
            
            *ecx_5 *= *edi_1 * *arg5
    else
        if (edx_5 == 1)
            edi_1 = arg4
            *edi_1 = *(esi + 0x1c)
            edx_10 = *(esi + 0x18)
            goto label_42f6f6
        
        if (edx_5 == 2)
            edi_1 = arg4
            *edi_1 = *(esi + 0x18)
            edx_10 = *(esi + 0x1c)
            goto label_42f6f6
        
        if (edx_5 == 3)
            goto label_42f6eb
        
        sub_42aba3(arg1 + 0x28, nullptr, 0, "ID3DXEffectCompiler: Unexpected template type")
        var_8 = 0x80004005
else
    sub_42aba3(arg1 + 0x28, nullptr, 0, 
        "ID3DXEffectCompiler: Unexpected node encountered when trying to determine type")
    var_8 = 0x80004005

return var_8
