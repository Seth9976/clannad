// 函数: sub_1a95b94
// 地址: 0x1a95b94
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

sub_1a92fc0(0x122c)
int32_t ebx
int32_t var_8 = ebx
OSVERSIONINFOA var_9c
var_9c.szCSDVersion[0x7c].d = &var_9c
var_9c.dwOSVersionInfoSize = 0x94

if (GetVersionExA(var_9c.szCSDVersion[0x7c].d) != 0 && var_9c.dwPlatformId == 2
        && var_9c.dwMajorVersion u>= 5)
    var_9c.szCSDVersion[0x7c] = 1
    var_9c.szCSDVersion[0x7d] = 0
    var_9c.szCSDVersion[0x7e] = 0
    var_9c.szCSDVersion[0x7f] = 0
    return 1

var_9c.szCSDVersion[0x7c] = 0x90
var_9c.szCSDVersion[0x7d] = 0x10
var_9c.szCSDVersion[0x7e] = 0
var_9c.szCSDVersion[0x7f] = 0
char var_1230
var_9c.szCSDVersion[0x78].d = &var_1230
var_9c.szCSDVersion[0x74] = 0x40
var_9c.szCSDVersion[0x75] = 0x47
var_9c.szCSDVersion[0x76] = 0xad
var_9c.szCSDVersion[0x77] = 1

if (GetEnvironmentVariableA(var_9c.szCSDVersion[0x74].d, var_9c.szCSDVersion[0x78].d, 
        var_9c.szCSDVersion[0x7c].d) != 0)
    char* ecx_1 = &var_1230
    
    if (var_1230 != 0)
        do
            uint32_t eax_1
            eax_1.b = *ecx_1
            
            if (eax_1.b s>= 0x61 && eax_1.b s<= 0x7a)
                eax_1.b -= 0x20
                *ecx_1 = eax_1.b
            
            ecx_1 = &ecx_1[1]
        while (*ecx_1 != 0)
    
    var_9c.szCSDVersion[0x7c] = 0x16
    var_9c.szCSDVersion[0x7d] = 0
    var_9c.szCSDVersion[0x7e] = 0
    var_9c.szCSDVersion[0x7f] = 0
    var_9c.szCSDVersion[0x78].d = &var_1230
    var_9c.szCSDVersion[0x74] = 0x28
    var_9c.szCSDVersion[0x75] = 0x47
    var_9c.szCSDVersion[0x76] = 0xad
    var_9c.szCSDVersion[0x77] = 1
    char* eax_3
    
    if (sub_1a93220(var_9c.szCSDVersion[0x74].d, var_9c.szCSDVersion[0x78].d, 
            var_9c.szCSDVersion[0x7c].d) != 0)
        var_9c.szCSDVersion[0x7c] = 4
        var_9c.szCSDVersion[0x7d] = 1
        var_9c.szCSDVersion[0x7e] = 0
        var_9c.szCSDVersion[0x7f] = 0
        uint8_t var_1a0[0x104]
        var_9c.szCSDVersion[0x78].d = &var_1a0
        var_9c.szCSDVersion[0x74] = 0
        var_9c.szCSDVersion[0x75] = 0
        var_9c.szCSDVersion[0x76] = 0
        var_9c.szCSDVersion[0x77] = 0
        GetModuleFileNameA(var_9c.szCSDVersion[0x74].d, var_9c.szCSDVersion[0x78].d, 
            var_9c.szCSDVersion[0x7c].d)
        uint8_t (* ecx_2)[0x104] = &var_1a0
        
        if (var_1a0[0] != 0)
            do
                uint8_t eax_4 = *ecx_2
                
                if (eax_4 s>= 0x61 && eax_4 s<= 0x7a)
                    *ecx_2 = eax_4 - 0x20
                
                ecx_2 = &(*ecx_2)[1]
            while (*ecx_2 != 0)
        
        var_9c.szCSDVersion[0x7c].d = &var_1a0
        var_9c.szCSDVersion[0x78].d = &var_1230
        eax_3 = sub_1a93330(var_9c.szCSDVersion[0x78].d, var_9c.szCSDVersion[0x7c].d)
        int32_t ecx_3
        ecx_3.b = var_9c.szCSDVersion[0x7c]
        ecx_3:1.b = var_9c.szCSDVersion[0x7d]
        ecx_3:2.b = var_9c.szCSDVersion[0x7e]
        ecx_3:3.b = var_9c.szCSDVersion[0x7f]
    else
        eax_3 = &var_1230
    
    if (eax_3 != 0)
        var_9c.szCSDVersion[0x7c] = 0x2c
        var_9c.szCSDVersion[0x7d] = 0
        var_9c.szCSDVersion[0x7e] = 0
        var_9c.szCSDVersion[0x7f] = 0
        var_9c.szCSDVersion[0x78] = eax_3.b
        var_9c.szCSDVersion[0x79] = eax_3:1.b
        var_9c.szCSDVersion[0x7a] = eax_3:2.b
        var_9c.szCSDVersion[0x7b] = eax_3:3.b
        void* eax_5 = sub_1a93270(var_9c.szCSDVersion[0x78].d, var_9c.szCSDVersion[0x7c])
        int32_t ecx_4
        ecx_4.b = var_9c.szCSDVersion[0x7c]
        ecx_4:1.b = var_9c.szCSDVersion[0x7d]
        ecx_4:2.b = var_9c.szCSDVersion[0x7e]
        ecx_4:3.b = var_9c.szCSDVersion[0x7f]
        
        if (eax_5 != 0)
            void* ecx_5 = eax_5 + 1
            
            if (*(eax_5 + 1) != 0)
                do
                    if (*ecx_5 != 0x3b)
                        ecx_5 += 1
                    else
                        *ecx_5 = 0
                while (*ecx_5 != 0)
            
            var_9c.szCSDVersion[0x7c] = 0xa
            var_9c.szCSDVersion[0x7d] = 0
            var_9c.szCSDVersion[0x7e] = 0
            var_9c.szCSDVersion[0x7f] = 0
            var_9c.szCSDVersion[0x78] = 0
            var_9c.szCSDVersion[0x79] = 0
            var_9c.szCSDVersion[0x7a] = 0
            var_9c.szCSDVersion[0x7b] = 0
            var_9c.szCSDVersion[0x74] = (eax_5 + 1).b
            var_9c.szCSDVersion[0x75] = (eax_5 + 1):1.b
            var_9c.szCSDVersion[0x76] = (eax_5 + 1):2.b
            var_9c.szCSDVersion[0x77] = (eax_5 + 1):3.b
            int32_t result = sub_1a9b397(var_9c.szCSDVersion[0x74].d, var_9c.szCSDVersion[0x78].d, 
                var_9c.szCSDVersion[0x7c].d)
            
            if (result == 2 || result == 3 || result == 1)
                return result

var_9c.szCSDVersion[0x7c].d = &var_8
HMODULE eax_7 = sub_1a95b67(var_9c.szCSDVersion[0x7c].d)
int32_t ecx_6
ecx_6.b = var_9c.szCSDVersion[0x7c]
ecx_6:1.b = var_9c.szCSDVersion[0x7d]
ecx_6:2.b = var_9c.szCSDVersion[0x7e]
ecx_6:3.b = var_9c.szCSDVersion[0x7f]
return sbb.d(eax_7, eax_7, var_8.b u< 6) + 3
