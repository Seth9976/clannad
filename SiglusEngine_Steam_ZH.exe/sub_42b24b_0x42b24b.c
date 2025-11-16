// 函数: sub_42b24b
// 地址: 0x42b24b
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ebx = arg1
int32_t eax = *(ebx + 4)
int32_t edi
int32_t var_c = edi
char* edi_1 = arg2

if (edi_1 u>= eax)
    return nullptr

arg1.b = *edi_1
void* i

if (arg1.b != 0x5c || (*(ebx + 0x28) & 4) != 0)
    i = &edi_1[1]
    *arg3 = sx.d(arg1.b)
else
    i = &edi_1[1]
    
    if (i u>= eax)
        sub_42aba3(*(ebx + 0x30), ebx + 8, 0x3ef, "character continues past end of file")
    
    arg1.b = *i
    int32_t eax_3 = sx.d(arg1.b)
    
    if (eax_3 == 0x61)
        *arg3 = 7
        i += 1
    else if (eax_3 == 0x62)
        *arg3 = 8
        i += 1
    else if (eax_3 == 0x66)
        *arg3 = 0xc
        i += 1
    else if (eax_3 == 0x6e)
        *arg3 = 0xa
        i += 1
    else if (eax_3 == 0x72)
        *arg3 = 0xd
        i += 1
    else if (eax_3 == 0x74)
        *arg3 = 9
        i += 1
    else if (eax_3 == 0x76)
        *arg3 = 0xb
        i += 1
    else if (arg1.b s< 0x30 || arg1.b s> 0x37)
        if (arg1.b != 0x78)
            goto label_42b37a
        
        bool cond:1_1
        
        if (i + 1 u< *(ebx + 4))
            cond:1_1 = _isxdigit(sx.d(*(i + 1))) == 0
        
        if (i + 1 u>= *(ebx + 4) || cond:1_1)
            edi_1 = arg2
        label_42b37a:
            void* eax_29 = sx.d(*i)
            i += 1
            *arg3 = eax_29
        else
            i += 1
            void* edi_3 = nullptr
            
            for (; i u< *(ebx + 4); i += 1)
                if (_isxdigit(sx.d(*i)) == 0)
                    break
                
                int32_t eax_18
                eax_18.b = *i
                int32_t edi_4 = edi_3 << 4
                
                if (eax_18.b s< 0x61)
                    int32_t eax_20 = sx.d(eax_18.b)
                    
                    if (eax_18.b s< 0x41)
                        edi_3 = edi_4 + eax_20 - 0x30
                    else
                        edi_3 = edi_4 + eax_20 - 0x37
                else
                    edi_3 = edi_4 + sx.d(eax_18.b) - 0x57
            
            *arg3 = edi_3
            edi_1 = arg2
    else
        void* ebx_1 = *(ebx + 4)
        
        if (i + 3 u< ebx_1)
            ebx_1 = i + 3
        
        void* ecx = nullptr
        
        for (; i u< ebx_1; i += 1)
            void* eax_13
            eax_13.b = *i
            
            if (eax_13.b s< 0x30)
                break
            
            if (eax_13.b s> 0x37)
                break
            
            ecx = sx.d(eax_13.b) + (ecx << 3) - 0x30
        
        *arg3 = ecx

return i - edi_1
