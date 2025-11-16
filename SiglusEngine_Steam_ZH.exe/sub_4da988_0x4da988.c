// 函数: sub_4da988
// 地址: 0x4da988
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t var_8 = arg3
uint32_t var_c = arg3
int32_t var_c_1 = 0
int32_t* esi = arg1
char* ebx = 2

if (esi[0xb] != 0)
    int32_t edi
    int32_t var_18_1 = edi
    
    do
        if (esi[0xb] s<= 1)
            var_8 = 0
            esi[0x10] = 0
        else
            arg3.w = esi[0x11].w
            arg1, arg3 = sub_4da38e(arg3.w, esi, &var_8)
        
        bool cond:2_1 = var_8.w == 0
        int32_t edi_1
        edi_1.w = *(esi + 0x46)
        esi[0x10] = ebx
        ebx = 2
        
        if (not(cond:2_1) && esi[0x10] s< 0x20)
            arg1.w = esi[0x11].w
            
            if (zx.d(arg1.w) - zx.d(var_8.w) s<= 0x7efa && arg1.w u< 0xfffd)
                char* eax_1
                eax_1, arg3 = sub_4da50d(esi, var_8)
                ebx = eax_1
                char* eax_2 = esi[0xb]
                
                if (ebx s> eax_2)
                    ebx = eax_2
                
                if (ebx == 3 && zx.d(esi[0x11].w) - zx.d(*(esi + 0x46)) s> 0x1000)
                    ebx = 2
        
        arg1 = esi[0x10]
        
        if (arg1 s< 3 || ebx s> arg1)
            if (var_c_1 == 0)
                var_c_1 = 1
            else
                arg1.w = esi[0x11].w
                arg1.w -= 1
                arg1, arg3 = sub_4da159(esi, 0, zx.d(*(zx.d(arg1.w) + esi[7])))
                
                if (arg1 != 0)
                    arg1.w = esi[0x11].w
                    int32_t ecx_9 = esi[0xf]
                    uint32_t eax_14
                    
                    if (arg1.w != 0)
                        eax_14 = zx.d(arg1.w)
                    else
                        eax_14 = 0x10000
                    
                    char* ecx_11
                    
                    if (ecx_9 s< 0)
                        ecx_11 = nullptr
                    else
                        ecx_11 = zx.d(esi[0xf].w) + esi[7]
                    
                    sub_4da82c(esi, ecx_11, eax_14 - ecx_9, 0)
                    esi[0xf] = zx.d(esi[0x11].w)
            
            esi[0x11].w += 1
            esi[0xb] -= 1
        else
            int32_t eax_6 = sub_4da159(esi, zx.d(esi[0x11].w) - zx.d(edi_1.w) - 1, arg1 - 3)
            int32_t eax_7 = esi[0x10]
            esi[0xb] += 1 - eax_7
            esi[0x10] = eax_7 - 2
            int32_t i
            
            do
                esi[0x11].w += 1
                arg3.w = esi[0x11].w
                
                if (esi[0xb] s> 1)
                    arg1, arg3 = sub_4da38e(arg3.w, esi, &var_8)
                
                i = esi[0x10]
                esi[0x10] -= 1
            while (i != 1)
            var_c_1 = 0
            esi[0x11].w += 1
            arg1.w = esi[0x11].w
            ebx = 2
            
            if (eax_6 != 0)
                int32_t ecx_4 = esi[0xf]
                uint32_t eax_9
                
                if (arg1.w != 0)
                    eax_9 = zx.d(arg1.w)
                else
                    eax_9 = 0x10000
                
                char* ecx_6
                
                if (ecx_4 s< 0)
                    ecx_6 = nullptr
                else
                    ecx_6 = zx.d(esi[0xf].w) + esi[7]
                
                sub_4da82c(esi, ecx_6, eax_9 - ecx_4, 0)
                esi[0xf] = zx.d(esi[0x11].w)
    while (esi[0xb] != 0)
    
    if (var_c_1 != 0)
        arg1.w = esi[0x11].w
        arg1.w -= 1
        sub_4da159(esi, 0, zx.d(*(zx.d(arg1.w) + esi[7])))

arg1.w = esi[0x11].w
int32_t ecx_14 = esi[0xf]
uint32_t eax_19

if (arg1.w != 0)
    eax_19 = zx.d(arg1.w)
else
    eax_19 = 0x10000

char* ecx_16

if (ecx_14 s< 0)
    ecx_16 = nullptr
else
    ecx_16 = zx.d(esi[0xf].w) + esi[7]

return sub_4da82c(esi, ecx_16, eax_19 - ecx_14, 1)
