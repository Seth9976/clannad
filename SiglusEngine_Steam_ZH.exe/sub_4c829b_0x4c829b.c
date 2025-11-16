// 函数: sub_4c829b
// 地址: 0x4c829b
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t __security_cookie_1 = __security_cookie
int32_t var_54 = 0
int32_t* ebx = arg3
*arg5 = 0
*(arg2 + 3) &= 0xbf
int32_t edi
int32_t var_68 = edi
char* edi_1 = *(arg2[0x1a] + 0x18)
char var_48[0x3f]
_strncpy(&var_48, edi_1, 0x3f)
char var_9 = 0
char (* eax_2)[0x3f] = &var_48

if (var_48[0] != 0)
    do
        if (*eax_2 == 0x5f)
            goto label_4c82fa
        
        eax_2 = &(*eax_2)[1]
    while (*eax_2 != 0)

if (*eax_2 != 0x5f)
    goto label_4c831a

label_4c82fa:
*eax_2 = 0

if (__stricmp(&(*eax_2)[1], "centroid") != 0)
    char* var_6c_3 = edi_1
    *arg5 = 1
    arg2[0x1b] = 0
    sub_4a4100(arg1, arg2[0x1a], 0x1196, "invalid input semantic '%s', only _centroid allowed")
else
    var_54 = 1
label_4c831a:
    char* edi_2 = &var_48
    char (* var_4c_1)[0x3f]
    
    if (var_48[0] == 0)
        var_4c_1 = nullptr
    else
        do
            if (_isalpha(sx.d(*edi_2)) == 0)
                break
            
            edi_2 = &edi_2[1]
        while (*edi_2 != 0)
        
        if (*edi_2 == 0)
            var_4c_1 = nullptr
        else
            char* var_6c_2 = edi_2
            var_4c_1 = sub_75efed()
    
    if (*edi_2 != 0)
        *edi_2 = 0
        edi_2 = &edi_2[1]
    
    eax_2.b = *edi_2
    void* var_4c_2
    
    if (eax_2.b == 0)
        var_4c_2 = &(*var_4c_1)[arg2[0x1c] u>> 2]
    else
        do
            if (_isdigit(sx.d(eax_2.b)) == 0)
                break
            
            edi_2 = &edi_2[1]
            eax_2.b = *edi_2
        while (eax_2.b != 0)
        
        if (*edi_2 == 0)
            var_4c_2 = &(*var_4c_1)[arg2[0x1c] u>> 2]
        else
            var_4c_2 = 0xffffffff
    
    char* eax_9 = sub_49f6ec(arg1, arg2)
    int32_t* edi_3 = nullptr
    
    if (ebx[4] == 0xffffffff)
        *(arg2 + 3) |= 0x40
        arg2[0x1b] = 0
    else
        do
            if (__stricmp(*ebx, &var_48) == 0)
                uint32_t eax_10
                eax_10.w = ebx[1].w
                edi_3 = ebx
                
                if ((eax_10.w & arg4) != 0)
                    break
            
            ebx = &ebx[9]
        while (ebx[4] != 0xffffffff)
        
        if (edi_3 == 0 || ebx[4] == 0xffffffff)
            *(arg2 + 3) |= 0x40
            arg2[0x1b] = 0
        else
            if (var_54 != 0 && (edi_3[2].b & 1) == 0)
                *arg2 |= 0x40000000
            
            int32_t ecx_6 = edi_3[3]
            
            if (ecx_6 != 0)
                void* var_6c_7 = var_4c_2
                int32_t var_70_3 = ecx_6
                char (* var_74_1)[0x3f] = &var_48
                char* var_78_2 = eax_9
                sub_4a4195(arg1, arg2[0x1a], 0x1261, 
                    "%s semantics '%s' has been deprecated; use '%s%d' instead")
            
            if (var_4c_2 u< ebx[5] || var_4c_2 u>= ebx[6])
                *arg2 |= 0x40000000
            
            if (arg2[4] u< ebx[8])
                if ((edi_3[1].w & arg4) == 0)
                    *arg2 |= 0x40000000
                
                arg2[0x1b] = (edi_3[7] + var_4c_2) << 0x10 | zx.d((edi_3[4]).w)
                
                if (var_54 != 0)
                    *(arg2 + 3) |= 1
            else
                *arg2 |= 0x40000000
                char* var_6c_8 = eax_9
                *arg5 = 1
                char (* var_70_4)[0x3f] = &var_48
                sub_4a4100(arg1, arg2[0x1a], 0x11cb, "invalid type used for '%s' %s semantics")

int32_t result
result.b = *arg5 != 0
sub_745f2b(__security_cookie_1)
return result
