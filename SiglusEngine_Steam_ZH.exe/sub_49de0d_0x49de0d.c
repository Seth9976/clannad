// 函数: sub_49de0d
// 地址: 0x49de0d
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg1
char* esi = arg2
int32_t edi
int32_t var_14 = edi
int32_t* result = arg1

while (true)
    if (_isspace(sx.d(*esi)) != 0)
        esi = &esi[1]
    else
        int32_t eax_2
        eax_2.b = *esi
        
        if (eax_2.b == 0)
            break
        
        int32_t* result_1
        
        if (eax_2.b != 0x5b)
            if (eax_2.b == 0x2e)
                goto label_49dec0
            
            if (arg3 == 0)
                return nullptr
            
            if (eax_2.b == 0x2e)
                goto label_49dec0
            
            while (_isspace(sx.d(*esi)) != 0)
            label_49dec0:
                esi = &esi[1]
            
            char* edi_2 = nullptr
            
            while (_isalnum(sx.d(*(edi_2 + esi))) != 0 || *(edi_2 + esi) == 0x5f)
                edi_2 = &edi_2[1]
            
            if (edi_2 == 0)
                return nullptr
            
            int32_t* result_2 = result
            uint32_t eax_17 = zx.d(*(result_2[6] + 0xa))
            arg3 = 0
            
            while (true)
                if (arg3 u>= eax_17)
                    return nullptr
                
                if (*(*(result_2[0xe] + (arg3 << 2)) + 4) != 0)
                    *(*result_2 + 8)
                    
                    if (sub_49ab18(esi, edi_2) == 0)
                        break
                
                arg3 += 1
                result_2 = result
            
            result_1 = sub_49ad67(result, arg3)
            
            if (result_1 == 0)
                return nullptr
            
            arg3 = 0
            esi += edi_2
        else
            bool cond:1_1
            
            do
                esi = &esi[1]
                cond:1_1 = _isspace(sx.d(*esi)) != 0
            while (cond:1_1)
            
            if (_isdigit(sx.d(*esi)) == 0)
                return nullptr
            
            int32_t edi_1 = 0
            
            while (_isdigit(sx.d(*esi)) != 0)
                edi_1 = sx.d(*esi) + edi_1 * 0xa - 0x30
                esi = &esi[1]
            
            while (_isspace(sx.d(*esi)) != 0)
                esi = &esi[1]
            
            if (*esi != 0x5d)
                return nullptr
            
            result_1 = sub_49da23(result, edi_1)
            
            if (result_1 == 0)
                return nullptr
            
            arg3 = 0
            esi = &esi[1]
        
        result = result_1

return result
