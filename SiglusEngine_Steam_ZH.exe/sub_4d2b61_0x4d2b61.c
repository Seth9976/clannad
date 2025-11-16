// 函数: sub_4d2b61
// 地址: 0x4d2b61
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t __security_cookie_1 = __security_cookie
int32_t edi
int32_t var_21c = edi
void* ecx = arg2[0x1a]
int32_t var_20c = 0
int32_t result

if (ecx != 0)
    char* ebx_1 = *(ecx + 0x18)
    void* var_210_1
    char* eax_3
    
    if (arg1[0x56] != 0)
        eax_3 = ebx_1
        var_210_1 = &eax_3[1]
        void* edx_2
        
        do
            edx_2.b = *eax_3
            eax_3 = &eax_3[1]
        while (edx_2.b != 0)
    
    if (arg1[0x56] != 0 && eax_3 - var_210_1 u> 2 && 0x5f72 == *ebx_1)
        if (arg2[0x1c] u> 4)
            char* var_224_1 = ebx_1
            sub_4a4100(arg1, ecx, 0x11bf, 
                "multi-register semantics are not allowed in fragments '%s'")
            var_20c = 1
        
        PSTR* eax_5 = sub_47e11a(&arg1[0x6d], ebx_1)
        
        if (eax_5 != 0)
            arg2[0x1b] = (*(*arg1 + 0x50))(0xffff, eax_5[1])
            goto label_4d2c64
        
        result = sub_47fcd9(&arg1[0x6d], ebx_1, arg1[0x74], 1)
        
        if (result s>= 0)
            CHAR* eax_6 = arg1[0x74]
            arg1[0x74] = &eax_6[1]
            arg2[0x1b] = (*(*arg1 + 0x50))(0xffff, eax_6)
            goto label_4d2c64
    else
        char const* const var_228_3
        
        if (arg2[0x1b] == 0xffffffff || (*(arg2 + 3) & 0x40) == 0 || arg3 != 0)
            int16_t eax_11 = (*(*(arg1[4] + (arg2[1] << 2)) + 4)).w
            int32_t* var_22c_4
            int16_t var_228_4
            int32_t* var_224_8
            
            if ((arg1[0x1c].b & 0x40) != 0)
                if ((eax_11.b & 0x10) == 0 || (eax_11:1.b & 2) != 0)
                    if ((eax_11.b & 0x20) == 0)
                        goto label_4d2c64
                    
                    var_224_8 = &var_20c
                    var_228_4 = 2
                    var_22c_4 = arg1[0x3d]
                    goto label_4d2d46
                
                result = sub_4c829b(arg1, arg2, arg1[0x3c], 2, &var_20c)
                
                if (result s>= 0)
                    if (arg2[0x1b] != 0xa || arg2[4] != 0)
                        goto label_4d2c64
                    
                    char* var_224_7 = sub_49f6ec(arg1, arg2)
                    var_228_3 = "Invalid %s semantics - POSITIONT0"
                    goto label_4d2cc3
            else if ((eax_11.b & 0x10) == 0 || (eax_11:1.b & 2) != 0)
                if ((eax_11.b & 0x20) == 0)
                    goto label_4d2c64
                
                var_224_8 = &var_20c
                var_228_4 = 1
                var_22c_4 = arg1[0x3e]
            label_4d2d46:
                result = sub_4c829b(arg1, arg2, var_22c_4, var_228_4, var_224_8)
                
                if (result s>= 0)
                    goto label_4d2c64
            else
                result = sub_4c829b(arg1, arg2, arg1[0x3d], 1, &var_20c)
                
                if (result s>= 0)
                    if (arg1[0xa] == 2 && (*(*arg1 + 0x54))(arg2[0x1b]) == 0xb)
                        *arg2 |= 0x114
                        *(arg2 + 0x20) = fconvert.d(float.t(0))
                        *(arg2 + 0x28) = fconvert.d(float.t(1))
                    
                    goto label_4d2c64
        else
            void var_208
            sub_49f87a(arg1, arg2, &var_208, 0x200)
            void* var_224_4 = &var_208
            var_228_3 = "invalid %s"
        label_4d2cc3:
            sub_4a4100(arg1, arg2[0x1a], 0x1196, var_228_3)
            var_20c = 1
        label_4d2c64:
            int32_t eax_8 = var_20c
            int32_t eax_9 = neg.d(eax_8)
            result = sbb.d(eax_9, eax_9, eax_8 != 0) & 0x80004005
else
    *(arg2 + 3) |= 0x40
    arg2[0x1b] = (*(*arg1 + 0x50))(0, 0)
    result = 0

sub_745f2b(__security_cookie_1)
return result
