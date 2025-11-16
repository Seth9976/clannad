// 函数: sub_4d28b3
// 地址: 0x4d28b3
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_20 = edi
char* edi_1 = nullptr
char* var_8 = nullptr
char* var_c = nullptr

if (*(arg1 + 0x158) == 0)
    return 0

void* i = *(arg2 + 0x30)

if (i == 0)
label_4d297c:
    edi_1 = var_8
    
    if (edi_1 != 0)
    label_4d2993:
        
        if (_tolower(sx.d(*edi_1)) == 0x63 && _isdigit(sx.d(edi_1[1])) != 0)
            void* esi_2 = &edi_1[2]
            int32_t eax_17
            
            while (true)
                eax_17 = _isdigit(sx.d(*esi_2))
                
                if (eax_17 == 0)
                    break
                
                esi_2 += 1
            
            if (*esi_2 == eax_17.b)
                void* var_2c_7 = &edi_1[1]
                int32_t eax_18 = sub_75efed()
                
                if (eax_18 u> 0x1fff)
                    int32_t var_2c_8 = eax_18
                    void* var_30_1 = &edi_1[2]
                    sub_4a4100(arg1, nullptr, 0, 
                        "Constant variable '%s' bound to register greater than 8191 (%d requested)")
                    return 0x80004005
                
                *(arg3 + 0xa) |= (eax_18 << 2).w | 2
    else
        edi_1 = var_c
        
        if (edi_1 != 0)
            goto label_4d2993
    
    return 0

do
    void* eax_2 = *(i + 8)
    
    if (*(eax_2 + 4) == 0x11)
        char* ecx = *(eax_2 + 0x10)
        
        if (ecx != 0)
            ecx = *(ecx + 0x18)
        
        void* eax_3 = *(eax_2 + 0x14)
        char* esi_1
        
        if (eax_3 != 0)
            esi_1 = *(eax_3 + 0x18)
        else
            esi_1 = nullptr
        
        void var_1c
        
        if (ecx == 0)
            if (esi_1 != 0 && _tolower(sx.d(*esi_1)) == 0x63)
                var_c = esi_1
        else if (esi_1 != 0 && sub_46b27d(ecx, 0, &var_1c) s>= 0 && _tolower(sx.d(*esi_1)) == 0x63)
            int32_t eax_8 = *(arg1 + 0xc8)
            int32_t var_18
            
            if (eax_8 == var_18)
                edi_1 = esi_1
            else if (((eax_8 ^ var_18) & 0xffff0000) == 0 && (var_18.w & 0xffff) == 0)
                var_8 = esi_1
    
    i = *(i + 0xc)
while (i != 0)

if (edi_1 != 0)
    goto label_4d2993

goto label_4d297c
