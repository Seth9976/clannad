// 函数: sub_401270
// 地址: 0x401270
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* ebx = arg5

if (ebx == 0)
    void var_30
    int32_t eax_1
    int32_t edx_1
    eax_1, edx_1 = sub_4013c0(arg1, &var_30, 0x2134, 0)
    
    if (eax_1 == 0xffffff80 && edx_1 == 0xffffffff)
        return eax_1
    
    if (edx_1 s<= 0 && (edx_1 s< 0 || eax_1 u< 0))
        return 0xffffff7c
    
    ebx = &var_30

int32_t* esi = &arg1[0x1e]
sub_4107c0(esi, sub_40ffd0(ebx))

if (arg4 != 0)
    *arg4 = arg1[0x72]

arg1[0x16] = 3
sub_403110(arg2)
sub_403060(arg3)
int32_t edi = 0

while (true)
    sub_410460(esi, ebx)
    
    if (edi s>= 3)
        break
    
    while (true)
        esi = &arg1[0x1e]
        void var_20
        int32_t eax_6 = sub_4107e0(esi, &var_20)
        int32_t esi_1
        
        if (eax_6 == 0)
            if (edi s>= 3)
                return 0
            
            int32_t eax_9
            int32_t edx_3
            eax_9, edx_3 = sub_4013c0(arg1, ebx, 0x2134, 0)
            
            if (edx_3 s>= 0)
                if (edx_3 s> 0)
                    break
                
                if (eax_9 u>= 0)
                    break
            
            esi_1 = 0xffffff7b
        else if (eax_6 == 0xffffffff)
            esi_1 = 0xffffff7b
        else
            esi_1 = sub_4032b0(arg2, arg3, &var_20)
            
            if (esi_1 == 0)
                edi += 1
                
                if (edi s>= 3)
                    return 0
                
                continue
        
        sub_403140(arg2)
        sub_403080(arg3)
        arg1[0x16] = 2
        return esi_1

return 0
