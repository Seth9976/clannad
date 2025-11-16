// 函数: sub_6d4550
// 地址: 0x6d4550
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t ebx
int32_t var_d4 = ebx
void* var_cc = arg2
char const* const esi = "keyword "@1": bad character '0x@2'"
char var_c8[0xc0]
int32_t i

for (i = 0; i u< 0xbf; )
    ebx:1.b = *esi
    
    if (ebx:1.b == 0)
        break
    
    if (arg2 == 0 || ebx:1.b != 0x40 || esi[1] == 0)
        var_c8[i] = ebx:1.b
        i += 1
    else
        ebx:1.b = esi[1]
        esi = &esi[1]
        int32_t edi_1 = sx.d(ebx:1.b)
        int32_t edx = 0
        
        if (edi_1 != 0x31)
            ebx.b = 0x31
            
            while (ebx.b != 0)
                ebx.b = (*"23456789")[edx]
                edx += 1
                
                if (sx.d(ebx.b) == edi_1)
                    break
        
        if (edi_1 != 0x31 && edx s>= 8)
            var_c8[i] = ebx:1.b
            i += 1
        else
            char* ecx_2 = var_cc + (edx << 5)
            
            for (; i u< 0xbf; i += 1)
                int32_t edx_1
                edx_1.b = *ecx_2
                
                if (edx_1.b == 0)
                    break
                
                if (ecx_2 u>= &ecx_2[0x20])
                    break
                
                var_c8[i] = edx_1.b
                ecx_2 = &ecx_2[1]
    
    arg2 = var_cc
    esi = &esi[1]

if (i u>= 0xc0)
    ___report_rangecheckfailure()
    noreturn

var_c8[i] = 0
int32_t* result = sub_6d4470(arg1, &var_c8)
sub_745f2b(eax_1 ^ &__saved_ebp)
return result
