// 函数: sub_1a99465
// 地址: 0x1a99465
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

int32_t ecx
int32_t var_8 = ecx
void* eax = sub_1a97834()
int32_t* eax_1 = sub_1a995a3(arg1, *(eax + 0x50))

if (eax_1 != 0)
    int32_t ebx_1 = eax_1[2]
    
    if (ebx_1 != 0)
        if (ebx_1 == 5)
            eax_1[2] = 0
            return 1
        
        if (ebx_1 != 1)
            int32_t ecx_2 = *(eax + 0x54)
            *(eax + 0x54) = arg2
            int32_t ecx_4 = eax_1[1]
            
            if (ecx_4 != 8)
                eax_1[2] = 0
                ebx_1(ecx_4)
            else
                int32_t i = data_1bfc450
                
                if (i s< data_1bfc454 + i)
                    int32_t ecx_8 = i * 0xc
                    
                    do
                        ecx_8 += 0xc
                        *(ecx_8 + *(eax + 0x50) - 4) = 0
                        i += 1
                    while (i s< data_1bfc454 + data_1bfc450)
                
                int32_t edi_3 = *(eax + 0x58)
                
                switch (*eax_1)
                    case 0xc000008d
                        *(eax + 0x58) = 0x82
                    case 0xc000008e
                        *(eax + 0x58) = 0x83
                    case 0xc000008f
                        *(eax + 0x58) = 0x86
                    case 0xc0000090
                        *(eax + 0x58) = 0x81
                    case 0xc0000091
                        *(eax + 0x58) = 0x84
                    case 0xc0000092
                        *(eax + 0x58) = 0x8a
                    case 0xc0000093
                        *(eax + 0x58) = 0x85
                
                ebx_1(8, *(eax + 0x58))
                *(eax + 0x58) = edi_3
            
            *(eax + 0x54) = ecx_2
        
        return 0xffffffff

return UnhandledExceptionFilter(arg2)
