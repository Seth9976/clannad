// 函数: sub_586580
// 地址: 0x586580
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char ecx = arg13

if (arg13 u> 8)
    ecx = 8

int32_t esi = arg14
uint32_t ecx_1 = zx.d(ecx)
int32_t eax = 0xffffff01 << ecx_1.b
arg13.d = ecx_1

if (esi s< eax)
    esi = eax
else if (esi s> 0xff)
    esi = 0xff

if (arg3 != 0 && arg20 != 0 && (arg12 == 0 || esi != eax))
    int32_t arg_24
    int32_t arg_28
    int32_t arg_2c
    int32_t arg_30
    eax = sub_4d2170(&arg_24, arg4, arg2, &arg_24, &arg_28, &arg_2c, &arg_30)
    int32_t edx_2 = arg5
    int32_t ecx_3 = arg7
    
    if (edx_2 s> ecx_3)
        arg7 = edx_2
        edx_2 = ecx_3
    
    int32_t edi_1 = arg6
    int32_t ecx_4 = arg8
    
    if (edi_1 s> ecx_4)
        eax = edi_1
        edi_1 = ecx_4
        ecx_4 = eax
    
    if (edx_2 s<= arg_2c)
        eax = arg7
        
        if (eax s>= arg_24 && edi_1 s<= arg_30 && ecx_4 s>= arg_28)
            if (edx_2 s< arg_24)
                edx_2 = arg_24
            
            if (eax s> arg_2c)
                eax = arg_2c
            
            if (edi_1 s< arg_28)
                edi_1 = arg_28
            
            if (ecx_4 s> arg_30)
                ecx_4 = arg_30
            
            data_1cd4490 = arg3 + ((arg2 * edi_1 + edx_2) << 2)
            data_1cd4448 = arg4
            data_1cd444c = arg2 << 2
            data_1cd4474 = zx.d(arg9)
            data_1cd4478 = zx.d(arg10)
            data_1cd447c = zx.d(arg11)
            data_1cd4480 = eax - edx_2 + 1
            data_1cd4484 = ecx_4 - edi_1 + 1
            void* ecx_9 = data_1cd4328
            data_1cd4488 = (arg2 - (eax - edx_2 + 1)) << 2
            data_1cd43c8 = *(ecx_9 + 0x3fc)
            data_1cd4444 = *(ecx_9 + 0x3fc)
            uint32_t eax_22 = zx.d(arg20)
            data_1cd4434 = eax_22
            data_1cd4450 = 0xff - eax_22
            int32_t eax_23 = *(ecx_9 + (eax_22 << 2))
            data_1cd4430 = 0
            data_1cd442c = 0
            data_1cd4428 = 0
            data_1cd43a4 = eax_23
            data_1cd4394 = *(ecx_9 + 0x3fc)
            data_1cd4430 = 0xff
            data_1cd438c = *(ecx_9 + 0x3fc)
            data_1cd442c = 0xff
            data_1cd4384 = *(ecx_9 + 0x3fc)
            data_1cd4428 = 0xff
            
            if (arg12 != 0)
                data_1cd4468 = arg19
                data_1cd4464 = arg13.d
                data_1cd4424 = arg16
                data_1cd4460 = esi
                data_1cd445c = arg15
                int32_t eax_31
                
                if (edx_2 s< arg17)
                    eax_31 = arg15 - mods.dp.d(sx.q(arg17 - edx_2), arg15)
                else
                    eax_31 = edx_2 - arg17
                
                int32_t temp1_2 = mods.dp.d(sx.q(eax_31), arg15)
                data_1cd446c = temp1_2
                data_1cd4420 = temp1_2
                int32_t eax_37
                int32_t edi_3
                
                if (edi_1 s< arg18)
                    edi_3 = arg16
                    eax_37 = edi_3 - mods.dp.d(sx.q(arg18 - edi_1), edi_3)
                else
                    eax_37 = edi_1 - arg18
                    edi_3 = arg16
                
                int32_t temp1_4 = mods.dp.d(sx.q(eax_37), edi_3)
                data_1cd4454 = arg12
                data_1cd441c = temp1_4
                data_1cd4470 = temp1_4 * arg15 + arg12
                data_1cd4458 = arg15 * edi_3 + arg12
            
            if (arg20 != 0xff)
                if (arg12 != 0 && esi != 0xff)
                    return sub_586440()
                
                return sub_586290()
            
            data_1cd448c = ((((data_1cd4474 - 0x100) << 8) + data_1cd4478) << 8) + data_1cd447c
            
            if (arg12 != 0 && esi != 0xff)
                return sub_586310()
            
            int32_t edi_4 = data_1cd4490
            int32_t eax_50 = data_1cd448c
            int32_t edx_14 = data_1cd4488
            int32_t i = data_1cd4484
            
            do
                int32_t ecx_14
                int32_t edi_5
                edi_5, ecx_14 = __memfill_u32(edi_4, eax_50, data_1cd4480)
                edi_4 = edi_5 + edx_14
                i -= 1
            while (i != 0)
            
            return eax_50

return eax
