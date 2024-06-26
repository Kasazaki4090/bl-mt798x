/* SPDX-License-Identifier: GPL-2.0+ */
/*
 * Copyright 2020 NXP
 */

#ifndef _eth_phy_h_
#define _eth_phy_h_

#include <phy.h>

struct udevice;

int eth_phy_binds_nodes(struct udevice *eth_dev);
int eth_phy_set_mdio_bus(struct udevice *eth_dev, struct mii_dev *mdio_bus);
struct mii_dev *eth_phy_get_mdio_bus(struct udevice *eth_dev);
int eth_phy_get_addr(struct udevice *dev);
void eth_phy_reset(struct udevice *dev, int value);

#endif
