/**
 *
 *  Copyright (C) 2012 - Aditya Patange
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License version 2 as
 *  published by the Free Software Foundation.
 *
 *  Sharp GP2A Proximity/Light Sensor Platform code for Board-LATONA.
 *
 */

#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/platform_device.h>
#include <linux/gpio.h>
#include <mach/board-latona.h>

#define PL_DEBUG 0


static struct platform_device secPLSensor_device = 
{
	.name = "secPLSensorPower",
	.id = -1,
	.num_resources = 0,
};


static struct platform_device *pl_sensor_device[] = 
{
	&secPLSensor_device,
};


void __init latona_sensors_init(void)
{
#if PL_DEBUG
	printk(KERN_DEBUG "[%s]\n",__func__);
#endif
	platform_add_devices(pl_sensor_device, ARRAY_SIZE(pl_sensor_device));
}
